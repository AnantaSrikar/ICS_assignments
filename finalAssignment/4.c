#include<stdio.h>
#include<string.h>
int main()
{
	int vowelCount(char[]);

	char str[200], word[10], optStr[200];
	int word_length = 0, opt_length = 0;

	FILE *outFPtr;
	outFPtr = fopen("output.txt", "w");

	fscanf(stdin, "%[^\n]s", str);

	for(int i = 0; i < strlen(str); i++)
		if(str[i] != '.' && str[i] != ' ' && str[i] != ',')
		{
			word[word_length] = str[i];
			word_length++;
		}
		
		else
		{
			word[word_length] = '\0';
			if(!(word_length > 3 && vowelCount(word) >= 2))	
			{
				for(int j = 0; j < word_length; j++)
					optStr[j + opt_length] = word[j];
				opt_length += word_length;
			}
			optStr[opt_length++] = str[i];
			word_length = 0;
		}
		
	optStr[opt_length] = '\0';

	fprintf(outFPtr, "%s", optStr);
	
	fclose(outFPtr);

	return(0);
}

int vowelCount(char str[])
{
	int cnt = 0;

	for(int i = 0; i < strlen(str); i++)
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			cnt++;
	
	return cnt;
}

/*
	Good question. Got me to think. Was challenging, but as usual the step-by-step
	approach worked. Naise. I think this is the last peice of code (academically) for
	this sem. C is good. It's da best.
*/