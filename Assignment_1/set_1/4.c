#include<stdio.h>
int main()
{
    int a,b,c;
    
    scanf("%d, %d, %d", &a, &b, &c);

    if( (a*a) == ((b*b) + (c*c)))
    {
        printf("%d, %d, %d\n", a, b, c);
    }

    else if((b*b) == ((a*a) + (c*c)))
    {
        printf("%d, %d, %d\n", b, a, c);
    }

    else if((c*c) == ((a*a) + (b*b)))
    {
        printf("%d, %d, %d\n", c, a, b);
    }

    else
    {
        printf("FAIL!\n");
    }
    
    return(0);

}