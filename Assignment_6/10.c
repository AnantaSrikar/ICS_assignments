#include<stdio.h>
int main()
{
	int n, num;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++)
		scanf("%d ", &arr[i]);
	
	scanf("%d", &num);

	if(num < n)
	{
		for (int i = 0; i < n; ++i) 
			for (int j = i + 1; j < n; ++j)
				if (arr[i] > arr[j]) 
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
		for(int i = n -1; i > n -1 - num; i--)
			printf("%d ", arr[i]);
	}
	
	else
		printf("INVALID");

	return(0);
}