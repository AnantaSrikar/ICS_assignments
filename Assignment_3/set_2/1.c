#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    
    if(n & 1)
        printf("ODD");
    
    else
        printf("EVEN");

    return (0);
}