#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;

    scanf("%f,%f,%f", &a, &b, &c);

    if((((b*b) - 4*a*c)) >= 0)
    {
        float x1, x2;
        x1 = (-b + sqrt((b*b) - 4 * a * c))/(2 * a) ;
        x2 = (-b - sqrt((b*b) - 4 * a * c))/(2 * a) ;

        printf("%0.1f, %0.1f", x1, x2);
    }

    else
    {
        float r, i;
        r = -b / (2 * a);
        i = sqrt(4 * a * c - (b*b))/(2 * a);
        printf("%0.1f+i%0.1f, %0.1f-i%0.1f", r, i, r, i);
    }
    

    return(0);
}