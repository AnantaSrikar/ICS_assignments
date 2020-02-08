#include<stdio.h>
int main()
{
    int nos[10];
    int n = 0, max = 0, min = 0, n_odd = 0;
    float avg = 0;

    while(scanf("%d", &nos[n]))
    {
        if (nos[n] != -999)
            n++;
        else
            break;        
    }
    
    max = min = nos[0];

    for (int i = 0; i < n; i++)
    {
        if (nos[i] > max)
            max = nos[i];
        else if (nos[i] < min)
            min = nos[i];

        avg += nos[i];
        
        if(nos[i] % 2 == 1)
            n_odd++;
    }

    avg /= n;

    printf("%d, %0.2f, %d, %d, %d", n, avg, n_odd, max, min);
    return (0);
}