#include<stdio.h>
int main()
{
    int x, y, z, r, x1, y1, z1;

    int sphereVal(int ,int, int, int, int, int, int);

    scanf("%d, %d, %d, %d, %d, %d, %d", &x, &y, &z, &r, &x1, &y1, &z1);

    if(sphereVal(x, y, z, r, x1, y1, z1) == 0)
        printf("ON THE SPHERE");
    
    else if(sphereVal(x, y, z, r, x1, y1, z1) < 0)
        printf("INSIDE THE SPHERE");
    else
        printf("OUTSIDE THE SPHERE");
    
    return(0);
}

int sphereVal(int x, int y, int z, int r, int x1, int y1, int z1)
{
    return ((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y) + (z1 - z)*(z1 - z) - (r*r));
}