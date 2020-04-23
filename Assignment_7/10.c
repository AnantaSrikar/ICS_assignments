#include<stdio.h>
#include<string.h>

int GetNumOfCharacters(const char usrStr[])
{
	int count = 0;
	while(usrStr[count] != '\0')
		count++;

	return count;
}

void OutputWithoutWhitespace(char usrStr[])
{
	printf("String with no whitespace: ");
	for(int i = 0; i < strlen(usrStr) - 1; i++)
		if(usrStr[i] == ' ' || usrStr[i] == '\t')
			continue;
		
		else
			printf("%c", usrStr[i]);
}

int main()
{
	char str[100];

	printf("Enter a sentence or phrase:\n\n");
	fgets(str, 100, stdin);
	printf("You entered: %s\n", str);

	printf("Number of characters: %d\n", GetNumOfCharacters(str));

	OutputWithoutWhitespace(str);

	printf("\n\n");

	return(0);
}

/*
	This one was a pain. Strings are annoying to handle in C.
	IDK how but Python has such good string handling capabilites,
	but is built on C. Nvm One more adv assignment, then Frontend time!
	This one took fricking around 10 tries (or maybe more, smh)
*/