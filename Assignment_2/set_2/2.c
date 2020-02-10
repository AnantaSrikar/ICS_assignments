#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    float theta = 0, m1 = 0, m2 = 0, s1 = 0, s2 = 0;

    scanf("%d, %d, %d, %d, %d, %d", &x1, &y1, &x2, &y2, &x3, &y3);

    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y1)/(x3 - x1);
    
    theta = atan((m1 - m2)/(1 + (m1*m2)));
    s1 = atan(m1);
    s2 = atan(m2);

    theta *= 180/3.14159265359;
    s1 *= 180/3.14159265359;
    s2 *= 180/3.14159265359;

    printf("m1 = %f\nm2 = %f", m1, m2);
    printf("\ntheta = %f\ns1 = %f\ns2 = %f", theta, s1, s2);

    /*if (m1 == m2)
        printf("ON STREET");

    else if (m1 > m2)
        printf("RIGHT");
    
    else if (m1 < m2)
        printf("LEFT");*/

    return (0);
}