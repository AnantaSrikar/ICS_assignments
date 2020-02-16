#include<stdio.h>
int main()
{
    int d1, m1, y1, d2, m2, y2;
    int y_diff, m_diff, d_diff;

    scanf("%d %d %d, %d %d %d", &d1, &m1, &y1, &d2, &m2, &y2);

    if(y1 <= y2)
    {
        y_diff = y2 - y1;
    }
    
    return(0);
}