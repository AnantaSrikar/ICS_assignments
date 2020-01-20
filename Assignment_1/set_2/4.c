#include<stdio.h>
int main()
{
    char ch;
    int ascii;

    printf("Enter a character : ");
    scanf("%c", &ch);
    ascii = ch;
    printf("ASCII of %c = %d\n", ch, ascii);

    return(0);
}