#include<stdio.h>
#include<math.h>
int main()
{
    const int t = 10;
    const float r = 3.5;
    float p;

    float SI(float, float, int);
    float CI(float, float, int, int);

    scanf("%f", &p);
    
    printf("Simple Interest for 10 years: %0.2f\n", SI(p, r, t));
    printf("Compound Interest for 10 years annually: %0.2f\n", CI(p, r, t, 1));
    printf("Compound Interest for 10 years semi-annually: %0.2f\n", CI(p, r, t, 2));
    printf("Compound Interest for 10 years quarterly: %0.2f\n", CI(p, r, t, 4));
    printf("Compound Interest for 10 years monthly: %0.2f\n", CI(p, r, t, 12));
    printf("Compound Interest for 10 years daily: %0.2f\n", CI(p, r, t, 365));

    return (0);
}

float SI(float p, float r, int t)
{
    float I = (p*r*t)/100;
    return I;
}

float CI(float p, float r, int t, int n)
{
    float CI = p * (pow((1 + r/(100*n)), (n * t)) - 1 );
    return CI;
}