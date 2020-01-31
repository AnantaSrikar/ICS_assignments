#include<stdio.h>
int main()
{
    int n1, n2, rem, quot;

    scanf("%d, %d", &n1, &n2);

    quot = n1 / n2 ;
    rem = n1 % n2 ;

    printf("%d, %d", quot, rem);

    return(0);
}
