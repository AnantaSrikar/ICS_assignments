#include<stdio.h>
int main()
{
    int d, m, y, rem = 0;
    scanf("%d, %d, %d", &d, &m, &y);

    if(y % 4 != 0)
        printf("Not a leap year");
        //find no of days left in year + 365*n(find it using rem) + 31 + 29
    
    else
    {
        if(m < 2)
            rem = 60 - d;
        
        else if(m == 2)
            rem = 29 - d;
        
        else
        {
            //find no of days left in year + 365*2 + 31 + 29
        }
    }
    
    return(0);
}