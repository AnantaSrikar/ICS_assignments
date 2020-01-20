#include<stdio.h>
int main()
{
    int temperature, humidity;

    printf("Hey John! \nWhat is today's temperature (in Celsius)? ");
    scanf("%d", &temperature);
    printf("And what about the humidity percentage? ");
    scanf("%d", &humidity);

    if((temperature >= 20 && temperature <= 35) && (humidity >= 20 && humidity <= 75))
    {
        printf("You should go for “breezy casuals”!\n");
    }

    else if(temperature < 20)
    {
        printf("You should go for “woolly woolens”!\n");
    }

    else if(temperature > 35)
    {
        printf("You should go for “summery stuff”!\n");
    }

    return(0);

}