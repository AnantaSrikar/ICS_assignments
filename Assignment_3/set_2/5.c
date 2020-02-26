#include<stdio.h>
int main()
{
    int n, sum = 0;

    int retSum(int);

    scanf("%d", &n);

    if (retSum(n) > 10)
        if(retSum(retSum(n)) > 10)
            if(retSum(retSum(retSum(n))) > 10)
                printf("%d", retSum(retSum(retSum(n))));
            else 
                printf("%d",retSum(retSum(n)));
        else
            printf("%d", retSum(retSum(n)));
    else
        printf("%d", retSum(n));

    return(0);
}

int retSum(int n)
{
    int sum = 0;

    if(n / 10 >= 0 && n % 10 >= 0 && n / 10 <= 99999)
    {
        sum += n % 10;
        n /= 10;

        if(n / 10 >= 0 && n % 10 >= 0)
        {
            sum += n % 10;
            n /= 10;

            if(n / 10 >= 0 && n % 10 >= 0)
            {
                sum += n % 10;
                n /= 10;

                if(n / 10 >= 0 && n % 10 >= 0)
                {
                    sum += n % 10;
                    n /= 10;

                    if(n / 10 >= 0 && n % 10 >= 0)
                    {
                        sum += n % 10;
                        n /= 10;

                        if(n / 10 >= 0 && n % 10 >= 0)
                            sum += n % 10 ;
                    }

                }
            }   
        }

        return sum;
    }    
}
