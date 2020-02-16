#include<stdio.h>
#include<math.h>
int main()
{
    float x1, y1, x2, y2;
    float dist = 0;

    scanf("%f, %f, %f, %f", &x1, &y1, &x2, &y2);

    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("%0.1f", dist);

    return(0);
}