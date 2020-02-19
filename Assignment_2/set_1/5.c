#include<stdio.h>
int main()
{
    float num, n;
    int binRep[4];

    scanf("%f", &n);

    if(n < 0 || n > 1)
        printf("Entered number is not a +ve decimal fraction less than 1");
    
    else
    {
        num = n;

        for(int i = 0; i < 4; i++)
        {
            if(n * 2 > 1)
            {
                binRep[i] = 1;
                n = (n * 2) - 1;
            }

            else if(n * 2 == 1)
            {
                binRep[i] = 1;
                n = 0;
            }

            else
            {
                binRep[i] = 0;
                n *= 2;                
            }
        }

        printf("Binary equivalent of %f is 0.", num);

        for (int i = 0; i < 4; i++)
            printf("%d", binRep[i]);
    }

    return(0);
}