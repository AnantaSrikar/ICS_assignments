#include<stdio.h>
int main()
{
    int n;
    void bin_rep(int);

    scanf("%d", &n);

    if((n >= 0) && (n <= 32))
    {
        printf("Binary equivalent of decimal number 21 is ");
        bin_rep(n);
    }
    
    else 
        printf("Entered number is out of range");
    
    return (0);
}

void bin_rep(int n) 
{ 
    if (n > 1) 
        bin_rep(n/2); 
  
    printf("%d", (n % 2)); 
} 