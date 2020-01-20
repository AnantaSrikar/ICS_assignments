#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, slope;
    
    printf("Enter the co-ordinates of 1st points :\n");
    scanf("%d%d", &x1, &y1);

    printf("Enter the co-ordinates of 2nd points :\n");
    scanf("%d%d", &x2, &y2);

    if ((x2 - x1) != 0)
    {
        slope = (y2 - y1) / (x2 - x1);
        printf("Slope = %d\n", slope);
    }
    
    else
    {
        printf("UNDEFINED\n");
    }

    return(0);
}