#include<stdio.h>
#include<string.h>
int main()
{
	void SortWords(char[][30], int);

	FILE *inFPtr = NULL, *outFPtr;

	char words[5000][30]; // Yes. 150MB. ;-;
	int word_count;

	inFPtr = fopen("input.txt", "r");
	outFPtr = fopen("output.txt", "w");

	if(inFPtr == NULL)
	{
		fprintf(stderr, "File doesn't exist, exiting...");
		return -1;
	}

	for(word_count = 0; !feof(inFPtr); word_count++)
		fscanf(inFPtr, "%s", words[word_count]);

	fclose(inFPtr);

	SortWords(words, word_count);

	for(int j = 1; j < word_count; j++) // Starts from 1 since there's an \n in the beginning ¯\_(ツ)_/¯
		if(strcmp("\n", words[j]) != 0)
			fprintf(outFPtr, "%s\n", words[j]);

	fclose(outFPtr);

	return(0);
}

void SortWords(char sortingList[][30], int numVals)
{
	char temp[50];
	for (int i = 0; i < numVals; i++)
		for (int j = i + 1; j < numVals; j++)
			if (strcmp(sortingList[i], sortingList[j]) > 0)
			{
				strcpy(temp, sortingList[i]);
				strcpy(sortingList[i], sortingList[j]);
				strcpy(sortingList[j], temp);
			}
}