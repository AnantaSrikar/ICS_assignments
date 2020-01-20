#include<stdio.h>
int main()
{
    int n1, n2, rem, quot;

    printf("Enter n1 : \n");
    scanf("%d", &n1);

    printf("Enter n2 : \n");
    scanf("%d", &n2);

    quot = n1 / n2 ;
    rem = n1 % n2 ;

    printf("Quotient = %d\nRemaner = %d\n", quot, rem);

    return(0);
}