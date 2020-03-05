#include<stdio.h>
#include<math.h>
int main()
{
    int a, b,cf = 0, cnt = 0;
    scanf("%d, %d", &a, &b);

    int len_a = log10(a);
    int len_b = log10(b);
    
    while(len_a > 0 || len_b > 0)
    {
        if((a % 10) + (b % 10) + cf > 9)
        {
            cnt++;
            cf = ((a % 10) +(b % 10) / 10);
        }
        else
            cf = 0;
        
        a /= 10;
        b /= 10;
        
        if(len_b > 0)
            len_b--;
        if(len_a > 0)
            len_a--;
        }
    printf("%d", cnt);
    return (0);
}
