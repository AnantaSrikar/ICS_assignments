#include<stdio.h>
#include<math.h>
int main()
{
    const long double G = 6.67408 * pow(10, -11),  Me = 5.972 * pow(10, 18),  Re = 6361, Mm = 7.35 * pow(10, 8), Rm = 1737;
    long double g(long double, long double, long double, long double);

    long double g1 = g(G, Me, Re, 250);
    long double g2 = g(G, Mm, Rm, 250);

    printf("%Lf, %Lf", g1, g2);

    return (0);
}

long double g(long double G, long double M, long double R, long double D)
{
    return ((G * M)/((R + D) * (R + D)));

    //printf("%f")
}