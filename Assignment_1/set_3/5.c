#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, slope;

    scanf("%d, %d, %d, %d", &x1, &y1, &x2, &y2);

    if ((x2 - x1) != 0)
    {
        slope = (y2 - y1) / (x2 - x1);
        printf("%d", slope);
    }
    
    else
    {
        printf("UNDEFINED");
    }

    return(0);
}
