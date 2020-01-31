#include<stdio.h>
#define PI 3.14
int main()
{
    int r, h, cyl_num, cost = 0;
    
    scanf("%d, %d, %d", &r, &h, &cyl_num);
    cost = PI * ((2*r*h) + (r*r)) * 100 * cyl_num;
    printf("%d", cost);
    return(0);
}
