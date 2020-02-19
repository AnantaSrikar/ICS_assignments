#include<stdio.h>
int main()
{
    float num, n;
    int binRep[4];

    scanf("%f", &n);

    if(n < 0)
        printf("Entered number is out of range");
    
    else
    {
        num = n;

        for(int i = 0; i < 4; i++)
        {
            printf("Loop : %d\n", i);
            if(n * 2 > 1)
            {
                binRep[i] = 1;
                n = (n * 2) - 1;
            }

            else if(n * 2 == 1)
            {
                binRep[i] = 1;
                break;
            }

            else
            {
                binRep[i] = 0;
                n = (n * 2) - 1;
            }

            printf("n = %f\nbinRep[%d] = %d\n", n, i, binRep[i]);
        }

        printf("Binary equivalent of %f is 0.", num);

        for (int i = 3; i <= 0; i--)
            printf("%d", binRep[i]);
    }

    return(0);
}