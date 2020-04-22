#include<stdio.h>

int CountCharacters(char userChar, char* userString)
{
	int count = 0;
	while(*userString != '\0')
	{
		if(*userString == userChar)
			count++;
		
		userString++; //Best use of pointers
	}
	
	return count;
}

int main()
{
	char userChar, userString[50];

	scanf("%c %[^\n]s", &userChar, userString);

	printf("%d\n", CountCharacters(userChar, userString));

	return(0);
}

/* 
	I honestly miss DomJudge, it was the best. the extra \n at the end of the printf wasn't needed. But yeah
	can't complain much cuz it's quarantine :(
*/