#include<stdio.h>

#define GR 1.618033
int main()
{
    float n;
    float ratioCal(float);

    scanf("%f", &n);

    if(n != ratioCal(n))
    {
        n = ratioCal(n);
        
        if(n != ratioCal(n))
        {
            n = ratioCal(n);

            if(n != ratioCal(n))
            {
                n = ratioCal(n);

                if(n != ratioCal(n))
                {
                    n = ratioCal(n);

                    if(n != ratioCal(n))
                        n = ratioCal(n);
                }
            }
        }
    }

    printf("%f %f", n, (GR - n));
    return (0);
}

float ratioCal(float n)
{
    return (1 + (1/n));
}