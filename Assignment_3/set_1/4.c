#include<stdio.h>
int main()
{
    int dist, amt = 0;
    char rain;

    scanf("%d, %c", &dist, &rain);

    if(dist <= 12)
        amt = 100;
    
    else if (dist > 12)
    {
        amt = 100;

        if(dist > 20)
            amt += (dist - 20) * 5 + 56;
        
        else if(dist <= 20)

            if(dist > 16)
                amt += (dist - 16) * 6 + 32;
            
            else
                amt += (dist - 12) * 8;
    }

    if(rain == 'y' || rain == 'Y')
        amt += dist * 2;
    
    printf("%d", amt);

    return (0);
}