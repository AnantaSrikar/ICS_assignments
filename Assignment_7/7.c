#include<stdio.h>

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
	
	for(int i = 0; i < numVals; i++)
		printf("%d ", sortingList[i]);
}

int main()
{
	int numVals, sortingList[20];
	
	scanf("%d ", &numVals);

	for(int i = 0; i < numVals; i++)
		scanf("%d ", &sortingList[i]);

	SortArray(sortingList, numVals);

	printf("\n");

	return(0);
}

/*
	Well, this is something new. I didn't know that an array's variable, which is a pointer could be passed as
	an array as well, now I shall try out the previous questions. Screw zyBooks again for the \n.
*/