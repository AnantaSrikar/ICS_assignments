#include<stdio.h>
int main()
{
    int n, num = 1, k = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        k = 0;
        num = 1;

        for(int j = 1; j <= (2 * n); j++)
        {
            if(j == 1 || i == 1 || k == 0)
                num = 1;
            
            if (j <= n - i)
                printf(" ");

            else if(j - i <= n && (j - i) % 2 == 0)
            {
                if(k != 0)
                    num = num * (i - k) / k;

                printf("%d ", num);
                k++;
            }
            
        }
        printf("\n");
    }
    return (0);
}