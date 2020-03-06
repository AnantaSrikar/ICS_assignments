#include<stdio.h>
int main() 
{ 
    long n, count = 0, i; 
    scanf("%ld", &n);

    for (i = 1; i * (i + 1) < 2 * n; i++);
    
    while (i > 0)
    {
        float a = (1.0 * n-(i * (i + 1)) / 2) / (i + 1); 
        if (a-(int)a == 0.0 && a != 0) 
        {
            int l = 0;
            while(l <= i)
            {
                if(l == 0)
                    printf("45 = %0.0f", (a + l));
                else
                    printf("+%0.0f", (a + l));
                l++;
            }
            count++;
            printf("\n");
        }
        i--;
    }    

    printf("Total number of consecutive sums are %ld", count);
    
    return 0; 
} 