#include<stdio.h>
int main()
{
    int n1, n2;

    scanf("%d, %d", &n1, &n2);

    if(n2 % n1 == 0)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return(0);

}
