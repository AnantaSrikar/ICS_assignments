#include<stdio.h>

int main()
{
	void SortArray(int*, int);
	FILE *inFPtr = NULL, *outFPtr;

	inFPtr = fopen("input.txt", "r");
	outFPtr = fopen("output.txt", "w");

	if(inFPtr == NULL)
	{
		fprintf(stderr, "File doesn't exist, exiting...");
		return -1;
	}

	int n;
	fscanf(inFPtr, "%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++)
		fscanf(inFPtr, "%d", &arr[i]);

	fclose(inFPtr);

	SortArray(arr, n);

	for(int i = n - 1; i >= 0; i--)
		fprintf(outFPtr, "%d\n", arr[i]);
	
	fclose(outFPtr);
	
	return(0);
}

void SortArray(int sortingList[], int numVals)
{
	for(int i = 0; i < numVals; i++) 
		for(int j = i + 1; j < numVals; j++)
			if (sortingList[i] > sortingList[j]) 
			{
				int temp = sortingList[i];
				sortingList[i] = sortingList[j];
				sortingList[j] = temp;
			}
}

/*
	Always remember to close an open file. They ain't
	gonna close on their own. Simple filehandling problem.
*/