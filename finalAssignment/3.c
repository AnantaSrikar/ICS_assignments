#include<stdio.h>
int main()
{
	int rows, columns;
	
	FILE *outFPtr;

	scanf("%d %d", &rows, &columns);
	
	double a[rows][columns];

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < columns; j++)
			scanf("%lf ", &a[i][j]);
	
	outFPtr = fopen("output.txt", "w");
	
	fprintf(outFPtr, "The matrix A is:\n");
	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
			fprintf(outFPtr, "%0.3lf ", a[i][j]);
		fprintf(outFPtr, "\n");
	}
	
	fclose(outFPtr);

	return(0);
}

/*
	Simple matrix io question
*/