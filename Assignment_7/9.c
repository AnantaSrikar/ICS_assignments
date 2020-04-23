#include<stdio.h>

int GetMinimumInt(int listInts[], int numVals)
{
	int min = listInts[0];
	
	for(int i = 0; i < numVals; i++)
		if(min > listInts[i])
			min = listInts[i];
	
	return min;
}

int main()
{
	int listInts[20], numVals, min;

	scanf("%d ", &numVals);
	for(int i = 0; i < numVals; i++)
		scanf("%d ", &listInts[i]);

	min = GetMinimumInt(listInts, numVals);

	for(int i = 0; i < numVals; i++)
	{
		listInts[i] -= min;
		printf("%d ", listInts[i]);
	}

	printf("\n");

	return(0);
}

/*
	Aight one more question left. Actually 2. The 6th one has bool as a return type,
	which isn't there in C. IKD this is weird I'm stopping it here. You get only what I
	feel about the code. This one too noob.
*/