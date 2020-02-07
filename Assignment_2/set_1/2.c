#include<stdio.h>
int main()
{
    float arr[4], max = 0, min = 0;
    
    scanf("%f %f %f %f", &arr[0], &arr[1], &arr[2], &arr[3]);

    for(int i = 0; i < 4; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        
        else if(arr[i] < min)
            min = arr[i];
    }

    printf("%f", (max - min));

    return (0);
}