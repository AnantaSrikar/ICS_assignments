#include<stdio.h>
int main()
{
    int n;
    long f_no = 0, sec_no = 1, fib = 0;
    scanf("%d", &n);

    if(n >= 1 && n <= 90)

        if(n == 1 || n == 2)
            printf("%ld", f_no + sec_no);
        
        else 
        {
            for(int i = 2; i <= n; i++)
            {
                fib = f_no + sec_no;
                f_no = sec_no;
                sec_no = fib;
            }
            
            printf("%ld\n", fib % 100007);
        }

    else
        printf("OUT OF RANGE");
    return (0);
}