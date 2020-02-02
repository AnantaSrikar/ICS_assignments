#include<stdio.h>
int main()
{
    int f1(int);
    int f2(int);
    int rootFinder(int, int);


    if (f1(-29) == 0 && f1(31) == 0)
    {
        printf("%d\n", rootFinder(-29, 31));
    }

    if (f2(-2931) == 0)
    {
        printf("YES");
    }

    else 
    {
        printf("NO");
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

int rootFinder(int x1, int x2)
{
    int a = 1, d = -2697;
    int x3 = (-d / a) /(x1 * x2);
    return x3;
}
