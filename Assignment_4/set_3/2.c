#include<stdio.h>
int main()
{
    int n, eve_int = 0, mul_3 = 0;
    while (scanf("%d", &n) && n != 0)
    {
        if(n % 3 == 0)
            mul_3++;
        if(n % 2 == 0)
            eve_int++;
    }

    printf("%d, %d", mul_3, eve_int);

    return (0);    
}