#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("ALPHABET\n");
    }

    else if (ch >= '0' && ch <= '9')
    {
        printf("NUMBER\n");
    }

    else 
    {
        printf("SYMBOL\n");
    }

    return(0);
}