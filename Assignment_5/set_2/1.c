    #include<stdio.h>
int main()
{
    char ch = 'A';
    int k = 1, cnt = 0;
    for (int i = 1; i <= 4; i++)
    {
        cnt = 0;
        k = 1;
        for(int j = 1; j <= 8; j++)
        {
            if(j < 5 - i || j > 4 + i)
                printf(" ");
            else
            {
                if(j <= 4)
                    printf("%c", ch + cnt++);
                else if(j >= 5)
                    printf("%d", k++);
            }
        }        
        printf("\n");
    }
    return (0);
}