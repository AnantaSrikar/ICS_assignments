#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int a = 0;
	fgets(str, 50, stdin);
	char noSpaces[strlen(str)];
	for(int i = 0; i < strlen(str); i++)
		if(str[i] != ' ')
			noSpaces[a++] = str[i];
	for(int i = 0; i < a; i++)
		printf("%c", noSpaces[i]);
	printf("\n");
	return(0);
}