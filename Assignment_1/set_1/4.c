#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Please enter a,b,c in the respective order :\n");
    scanf("%d%d%d", &a, &b, &c);

    if( (a^2) == ((b^2) + (c^2)))
    {
        printf("%d, %d, %d\n", a, b, c);
    }

    else if((b^2) == ((a^2) + (c^2)))
    {
        printf("%d, %d, %d\n", b, a, c);
    }

    else if((c^2) == ((a^2) + (b^2)))
    {
        printf("%d, %d, %d\n", c, a, b);
    }

    else
    {
        printf("FAIL!\n");
    }
    
    return(0);

}