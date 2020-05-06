#include<stdio.h>
#include<string.h>
int main()
{
	FILE *inFPtr = NULL, *outFPtr;

	char str[5000]; // Beeg file

	inFPtr = fopen("input.txt", "r");
	outFPtr = fopen("output.txt", "w");

	if(inFPtr == NULL)
	{
		fprintf(stderr, "Input.txt cannot be opened. Exiting.....");
		return(-1);
	}

	// fscanf(inFPtr,"%[^\n]s", str); - This not gonna work when you have muultiple lines
	int i = 0;
	while(!feof(inFPtr))
		str[i++] = fgetc(inFPtr);
	
	fclose(inFPtr);

	for(int i = strlen(str) - 2; i >= 0; i--) // IDK why -2, it was giving me a weird char otherwise
		fprintf(outFPtr, "%c", str[i]);

	fclose(outFPtr);

	return(0);
}