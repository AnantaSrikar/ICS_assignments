#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x;
    
    float babAlgo(float, int);
    float precSet(float);
    
    scanf("%d", &n);

    if(n > 0)
    {
        x = n/2;

        if(x != babAlgo(x, n))
        {
            x = babAlgo(x, n);

            if(x != babAlgo(x, n))
            {
                x = babAlgo(x, n);

                if(x != babAlgo(x, n))
                {
                    x = babAlgo(x, n);
                        
                    if(x != babAlgo(x, n))
                    {
                        x = babAlgo(x, n);

                        if(x != babAlgo(x, n))
                        {
                            x = babAlgo(x, n);
                        }
                    }
                }
            }
        }
        
        printf("%0.4f %0.4f", x, (sqrt(n) - x));
    }

    else
        printf("NO REAL SOLUTION");

    return (0);
}

float babAlgo(float x, int n)
{
    return ((x + (n / x)) / 2);
}