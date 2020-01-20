#include<stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two numbers :\n");

    scanf("%d%d", &n1, &n2);

    if(n2 % n1 == 0)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return(0);

}