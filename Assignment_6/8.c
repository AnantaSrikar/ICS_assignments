#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int a = 0;
	//fgets(str, 50, stdin); This is annoying as we get a \n at the end
	scanf("%[^\n]s", str);
	char noSpaces[strlen(str)];

	for(int i = 0; i < strlen(str); i++)
		if(str[i] != ' ' && str[i] != '\n')
			noSpaces[a++] = str[i];
	
	int isPalin = 1;
	
	for(int i = 0; i < (a / 2); i++)
		if(noSpaces[i] != noSpaces[a - 1 - i])
			isPalin++;
	
	if(isPalin != 1)
		printf("%s is not a palindrome\n", str);
	else
		printf("%s is a palindrome\n", str);
	
	return(0);
}