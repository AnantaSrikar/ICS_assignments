#include<stdio.h>
int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    if(n / 10 >= 0 && n % 10 >= 0 && n / 10 <= 9999)
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
                        sum += n % 10;
                }
            }   
        }

        printf("%d", sum);
    }

    else
        printf("Digits more than 5 so can't calculate");    

    return(0);
}
