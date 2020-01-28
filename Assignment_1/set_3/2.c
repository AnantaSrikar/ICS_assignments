#include<stdio.h>
int main()
{
    int f1(int);
    int f2(int);

    if (f1(-29) == 0 && f1(31) == 0)
    {
        printf("-29 and 31 are the roots for the first equation\n");
        // TODO : find the third root
    }

    if (f2(-2931) == 0)
    {
        printf("YES\n");
    }
    return(0);
}

int f1(int x)
{
    return( (x*x*x) + (x*x) - (905 * x) - 2697 );
}

int f2(int x)
{
    return( (x*x*x) + (x*x*2871) - (174961 * x) + 2634969);
}