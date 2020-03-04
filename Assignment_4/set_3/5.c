#include<stdio.h>
int main()
{
    int a, b,cf = 0;
    scanf("%d, %d", &a, &b);
    
    while(a > 0 && b > 0)
    {
        if((a % 10) + (b % 10) > 9)
            cf++;
        a /= 10;
        b /= 10;
    }

    printf("%d", cf);
    return (0);
}