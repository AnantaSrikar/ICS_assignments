#include<stdio.h>
int main()
{
    int n, bin = 0;

    printf("Input a number : ");
    scanf("%d", &n);

    for (int i = n; i != 0; i /= 2)
    {
        bin++;
    }
    printf("bits = %d\n", bin);

    return(0);
}