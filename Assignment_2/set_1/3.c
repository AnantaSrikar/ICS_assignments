#include<stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    if(n < 0)
        printf("Entered number is out of range");
    
    else
    {
        while(n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        printf("Sum of the digits of 546 is %d", sum);
    }

    return (0);
}