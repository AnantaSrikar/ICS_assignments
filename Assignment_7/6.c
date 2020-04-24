#include<stdio.h>
#include<string.h>

void RemoveSpaces(char userString[], char userStringNoSpaces[])
{
	int a = 0;

	for(int i = 0; i < strlen(userString); i++)
		if(userString[i] != ' ')
			userStringNoSpaces[a++] = userString[i];
	
	userStringNoSpaces[a] = '\0';
	printf("%s", userStringNoSpaces);
}

int main()
{
	char userString[50], userStringNoSpaces[50];

	scanf("%[^\n]s", userString);

	RemoveSpaces(userString, userStringNoSpaces);

	printf("\n");

	return(0);
}

//  Just funcionised prev assignment 8th question, easy peasy