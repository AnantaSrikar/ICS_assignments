#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	void PrintMenu(char* str);

	char str[300];
	
	printf("Enter a sample text:");
	scanf("%[^\n]s", str);

	printf("\n\nYou entered: %s\n", str);

	PrintMenu(str);

	return(0);
}

int GetNumOfNonWSCharacters(const char* str)
{
	int cnt = 0;
	while(*str != '\0')
		if(*(str++) != ' ')
			cnt++;
	return cnt;
}

int GetNumOfWords(const char* str)
{
	int numOfWords = 0;

	while(*(str++) != '\0')
		if((*str >= 'a' && *str <= 'z') && (*(str + 1) == '!' || *(str + 1) == ' ' || *(str + 1) == '.' || *(str + 1) == ',' || *(str + 1) == ';'))
			numOfWords++;
	
	return numOfWords;
}

// One of the coolest function I ever made

void FixCapitalization(char* str)
{
	int capNeeded = 1;
	for(int i = 0; i < strlen(str); i++)
	{
		if(str[i] == '.' && str[i + 1] == ' ')
			capNeeded = 1;
		
		if(capNeeded && !(str[i] == ' ' || str[i] == '.'))
		{
			str[i] = toupper(str[i]);
			capNeeded = 0;
		}
	}
}

void ReplaceExclamation(char* str)
{
	while(*(str++) != '\0')
		if(*str == '!')
			*str = '.';
}

void ShortenSpace(char* str)
{
	char newString[strlen(str)];
	int cnt = 0;
	
	for(int i = 0; i < strlen(str); i++)
		if(str[i] == ' ' && str[i - 1] == ' ')
			continue;
		else
			newString[cnt++] = str[i];
	newString[cnt] = '\0';

	strcpy(str, newString);	
}

void PrintMenu(char* str)
{
	char opt;

	do
	{
		printf("\nMENU\nc - Number of non-whitespace characters\nw - Number of words\nf - Fix capitalization\nr - Replace all !'s\ns - Shorten spaces\nq - Quit\n");
		printf("\nChoose an option:\n");

		scanf(" %c", &opt);
		switch(opt)
		{
			case 'c':
				printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(str));
				break;
			
			case 'w':
				printf("Number of words: %d\n", GetNumOfWords(str));
				break;
			
			case 'f':
				FixCapitalization(str);
				printf("Edited text: %s\n", str);
				break;
			
			case 'r':
				ReplaceExclamation(str);
				printf("Edited text: %s\n", str);
				break;
			
			case 's':
				ShortenSpace(str);
				printf("Edited text: %s\n", str);
				break;
			
			case 'q':
				break;
			
		}
	}while(opt != 'q');
}

/*
	Special shoutout to Fix capitalization. Spent a loot of time on it. Wasted 30 mins by
	writing '=' instead of '=='. Note to self : always check you if statements.
	Cool advanced assignment problem anyways, I'm sure I could use this code elsewhere in
	the future.
*/