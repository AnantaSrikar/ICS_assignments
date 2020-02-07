#include<stdio.h>
#include<math.h>
int main()
{
    const int t = 10;
    const float r = 3.5;
    float p;
    float SI(float, float, int);

    scanf("%f", &p);
    
    printf("Simple Interest for 10 years: %f", SI(p, r, t));

    return (0);
}

float SI(float p, float r, int t)
{
    float I = (p*r*t)/100;
    return I;
}