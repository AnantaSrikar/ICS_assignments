#include<stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    if(n >= 0)
    {
        for(int i = 1; i<n; i++)
            if(n % i == 0)
                sum += i;
        if (sum == n)
            printf("PERFECT");
        else
            printf("NOT PERFECT");

    }    

    else
        printf("Input must be positive");
    
    return (0);
}