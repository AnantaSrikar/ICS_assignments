#include<stdio.h>
int main()
{
    int d, m, y, rem = 0;
    int monthDays[] = {31 ,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d, %d, %d", &d, &m, &y);

    if(m > 12 || m < 1 || d > monthDays[m - 1] || d < 1)
        printf("INVALID");

    if(y % 4 == 0)
    {
        if(m == 1)
            rem = 29 + 31 - d;

        else if(m == 2)
            rem = 29 - d;

        else
        {
            rem = (monthDays[m - 1] - d);

            for (int i = m ; i < 12; i++)
                rem += monthDays[i];
            
            rem += 3 * 365 + 31 + 29;
        }
    }

    else
    {
        int rem_years = 3 - (y % 4);

        rem = monthDays[m - 1] - d;

        for (int i = m ; i < 12; i++)
            rem += monthDays[i];
        
        rem += rem_years * 365 + 31 + 29;
    }

    printf("%d", rem);
    
    return(0);
}