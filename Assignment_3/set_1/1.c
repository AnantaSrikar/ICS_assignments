#include<stdio.h>
int main()
{
    int units;
    float amt, sch;
    float calcAmt(int);
    
    scanf("%d", &units);

    amt = calcAmt(units);

    if (amt > 400)
        sch = 0.15 * amt;
    
    printf("amount charges: %0.2f\nsurcharge amount: %0.2f\n", amt, sch);

    if (amt < 100)
        amt = 100;
    
    printf("net amount: %0.2f", (amt + sch));

    return(0);
}

float calcAmt(int n)
{
    if(n < 200)
        return (n * 1.2);
    
    else if(n >= 200 && n < 400)
        return (n * 1.5);
    
    else if(n >= 400 && n < 600)
        return (n * 1.8);
    
    else if(n >= 600)
        return (n * 2);
}