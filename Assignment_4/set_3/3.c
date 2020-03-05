#include<stdio.h>
int main()
{
    int n, num_time = 0;
    int isPrime(int);

    scanf("%d", &n);

    if(n < 3)
        printf("NO MERSENNE PRIME");

    else
        for (int i = 2; (1 << i) - 1 <= n; i++)
            if(isPrime((1 << i) - 1))
                if(!num_time++)
                    printf("%d", (1 << i) - 1);
                else
                    printf(", %d", (1 << i) - 1);
    return(0);
}

int isPrime(int n)
{
    int ret = 1;
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            {
                ret = 0;
                break;
            }
    return ret;
}