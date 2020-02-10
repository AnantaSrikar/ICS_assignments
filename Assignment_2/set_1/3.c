#include<stdio.h>
int main()
{
    int num, n, sum = 0;
    scanf("%d", &num);

    if (num >= 0 && num < 1000)
    {
        n = num;
        while(n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        printf("Sum of the digits of %d is %d", num, sum);
    }
    
    else
    {
        printf("Entered number is out of range");
    }

    return(0);
}