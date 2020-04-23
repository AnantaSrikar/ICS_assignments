#include<stdio.h>

void GetUserValues(int userValues[], int numValues)
{	
	for(int i = 0; i < numValues; i++)
		scanf("%d ", &userValues[i]);
}

void OutputIntsLessThanOrEqualToThreshold(int userValues[], int maxVal, int numValues)
{
	for (int i = 0; i < numValues; i++)
		if(userValues[i] <= maxVal)
			printf("%d ", userValues[i]);
}

int main()
{
	int numValues, userValues[20], maxVal;
	
	scanf("%d ", &numValues);

	GetUserValues(userValues, numValues);

	scanf("%d", &maxVal);

	OutputIntsLessThanOrEqualToThreshold(userValues, maxVal, numValues);
	printf("\n");

	return(0);
}

/*
	I quickly wanna get done with assignments so that I can learn front-end and 
	resume making my own website. I really wanna start blogging, cuz why not? It's
	super cool, and you can express about yourself. Aight I'll get back to submitting 
	this assignment.
*/