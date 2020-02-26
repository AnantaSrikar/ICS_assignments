#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x;
    
    float babAlgo(float, int);
    float absDiff(float, float);
    
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
        
        printf("%0.4f %0.4f", x, absDiff(n, x));
    }

    else if(n == 0)
        printf("%0.4f %0.4f", 0.0, 0.0);
    else
        printf("NO REAL SOLUTION");

    return (0);
}

float babAlgo(float x, int n)
{
    return ((x + (n / x)) / 2);
}

float absDiff(float n, float x)
{
    if (sqrt(n) > x)
        return (sqrt(n) - x);
    
    else if(sqrt(n) == x)
        return 0;

    else
        return (x - sqrt(n));
}
