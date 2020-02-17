#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int inLine(int, int, int, int, int, int);
    int max(int, int);
    int min(int, int);

    scanf("%d, %d, %d, %d, %d, %d, %d, %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    //printf("%d", inLine(x1, y1, x2, y2, x3, y3));

    //printf("max = %d\nmin = %d", max(x1, x2), min(x1, x2));

    printf("%d", inLine(x1, y1, x2, y2, x3, y3));

    return(0);
}

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