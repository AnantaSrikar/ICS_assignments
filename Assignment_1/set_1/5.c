#include<stdio.h>
#include<math.h>
int main()
{
    
    int x,n,xpn;
    printf("Enter x and n for x^n : ");
    scanf("%d%d", &x, &n);
    xpn = pow(x,n);
    printf("%d^%d = %d\n", x, n, xpn);

    return(0);
}