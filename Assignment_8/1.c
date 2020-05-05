#include<stdio.h>

int main()
{
	FILE *fp1, *fp2;

	fp1 = fopen("input.txt", "r");
	fp2 = fopen("output.txt", "w");
	
	int a[100], num;
	fscanf(fp1, "%d", &num);

	for(int i=0; i<num; i++)
		fscanf(fp1, "%d", &a[i]);
	
	fclose(fp1);
	
	for(int i=0; i<num; i++)
		fprintf(stdout, "%d\n", a[i]);
	
	fclose(fp2);

	return(0);
}

/*
	TBH the solution to the question was already there. I just changed
	printf to fprintf. IDK what sir was upto when giving this question
*/