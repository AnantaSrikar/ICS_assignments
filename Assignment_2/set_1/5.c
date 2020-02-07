#include<stdio.h>
#include<math.h>
int main()
{
    float n;
    void bin_rep(float);

    scanf("%f", &n);

    bin_rep(n);

    return(0);
}

void bin_rep(float n)
{
    if(n != 1)
        bin_rep((n * 2) - floor(n*2));
    
    printf("%f", floor(n*2));
}