#include<stdio.h>
#include<string.h>
int main()
{
	int hasComma(char*);

	char str[30];

	do
	{
		char word1[20], word2[20];
		int i = 0, j = 0;

		printf("Enter input string:\n");
		scanf(" %[^\n]s\n", str);

		if(strcmp(str, "q") == 0)
			break;

		if(!hasComma(str))
		{
			printf("Error: No comma in string.\n\n");
			continue;
		}

		while(str[i] != ',')
		{
			if(str[i] != ' ')
				word1[j++] = str[i];
			i++;
		}
		word1[j] = '\0'; // Ending the string properly

		j = 0; // Resetting for next word

		while(str[i] != '\0')
		{
			if(str[i] != ' ' && str[i] != ',')
				word2[j++] = str[i];
			i++;
		}
		word2[j] = '\0';

		printf("First word: %s\nSecond word: %s\n\n", word1, word2);
	
		
	}while(1);

	return(0);
}

int hasComma(char str[])
{
	while(*str != '\0')
		if(*(str++) == ',')
			return 1;
	return 0;
}

/*
	Pretty decent question. Got me to think a lil. The previous one
	was harder. I'm sure I'll get to re-use this code (hopefully)
	sometime in the future.
*/