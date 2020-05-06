#include<stdio.h>
#include<string.h>
int main()
{
	FILE *inFPtr = NULL;

	char str[5000]; // Again beeg file, about 5KB ;-; (not used to it)

	inFPtr = fopen("input.txt", "r");

	if(inFPtr == NULL)
	{
		fprintf(stderr, "Unable to open input.txt. Exiting...");
		return(-1);
	}
	
	int i = 0, count = 0;
	char searchStr[10];

	while(!feof(inFPtr))
		str[i++] = fgetc(inFPtr);
	
	str[i] = '\0';

	fclose(inFPtr);
	
	scanf("%[^\n]s", searchStr);

	for(i = 0; i < strlen(str); i++)
	{
		if(searchStr[0] == str[i])
		{
			int isFound = 1;

			for(int j = 0; j < strlen(searchStr); j++)
				if(searchStr[j] != str[i + j])
				{
					isFound = 0;
					break;
				}
			
			if(isFound)
				count++;
		}
	}

	printf("%d", count);
	
	return(0);
}

/*
	This one was a good question. Used in a loot of systems.
	Initially freaked out, but meh, I did it ;)
*/