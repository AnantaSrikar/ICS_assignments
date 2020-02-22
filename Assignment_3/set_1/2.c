#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum = 0, num = 1;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        num += i;
        sum += pow(num, 4);
    }

    printf("%d", sum);

    return (0);
}