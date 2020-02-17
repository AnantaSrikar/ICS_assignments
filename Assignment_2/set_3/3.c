#include<stdio.h>
int main()
{
    int d1, m1, y1, d2, m2, y2;
    int y_diff, m_diff, d_diff;

    scanf("%d %d %d, %d %d %d", &d1, &m1, &y1, &d2, &m2, &y2);

    if(y1 > y2)
    {
        if(m2 > m1)
        {
            y_diff = y1 - y2 - 1;

            if(d2 > d1)
            {
                m_diff = 11 - m2 + m1;
                d_diff = 29 - d1 + d2;
            }

            else if (d2 <= d1)
            {
                m_diff = 12 - m2 + m1;
                d_diff = d1 - d2 - 1;
            }

            printf("%d" ,(d_diff + m_diff*30 + y_diff*360));
        }

        else
        {
            y_diff = y1 - y2;
            m_diff = m1 - m2;
        }
        
    }

    else if (y1 == y2)
    {

    }

    else
    {
        
    }
    
    return(0);
}