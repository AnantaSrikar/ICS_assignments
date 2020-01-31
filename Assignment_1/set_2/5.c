#include<stdio.h>
int main()
{
    int n, bin = 0;

    scanf("%d", &n);

    for (int i = n; i != 0; i /= 2)
    {
        bin++;
    }
    printf("%d", bin);

    return(0);
}
