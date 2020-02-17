#include<stdio.h>

int max(int a, int b)
{
    return (a >= b ? a : b);
}

int min(int a, int b)
{
    return(a >= b ? b : a);
}

int inLine(int x1, int y1, int x2, int y2, int x3, int y3)
{
   if((x3 <= max(x1, x2)) && (x3 >= min(x1, x2)) && (y3 <= max(y1, y2)) && (y3 >= min(y1, y2))) // Condition for on line
      return 1;
   else 
      return 0;
}

int dir(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int val = (y2 - y1) * (x3 - x2) - (x2 - x1) * (y3 - y2);

    if (val == 0)  //collinear line segment
        return 0;
    
    else if(val < 0)  //anti-clockwise
        return 2; 

    else
        return 1;
}

int isIntersect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int dir1 = dir(x1, y1, x2, y2, x3, y3);
    int dir2 = dir(x1, y1, x2, y2, x4, y4);
    int dir3 = dir(x3, y3, x4, y4, x1, y1);
    int dir4 = dir(x3, y3, x4, y4, x2, y2);
    
    if(dir1 != dir2 && dir3 != dir4)
        return 1; //they are intersecting
        
    if(dir1==0 && inLine(x1, y1, x2, y2, x3, y3)) //when p2 of line2 are on the line1
        return 1;
        
    if(dir2==0 && inLine(x1, y1, x2, y2, x4, y4)) //when p1 of line2 are on the line1
        return 1;
        
    if(dir3==0 && inLine(x3, y3, x4, y4, x1, y1)) //when p2 of line1 are on the line2
        return 1;
        
    if(dir4==0 && inLine(x3, y3, x4, y4, x2, y2)) //when p1 of line1 are on the line2
        return 1;
         
   return 0;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    scanf("%d, %d, %d, %d, %d, %d, %d, %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    
    if(isIntersect(x1, y1, x2, y2, x3, y3, x4, y4))
        printf("YES");

    else
        printf("NO");

    return(0);
}