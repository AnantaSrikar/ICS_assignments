#include<stdio.h>
int main()
{
    int num;
    for(int i = 1; i <= 7; i++)
    {
        num = 1;
        
        for(int j = 1; j <= 4; j++)

            if(i+j < 5 || (i > 4 && (i - j > 3)))
                printf(" ");

            else
                printf("%d", num++);

        printf("\n");
    }

    return (0);
}