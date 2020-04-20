#include<stdio.h>
int main()
{
	int n, min, max;
	scanf("%d ", &n);
	int nums[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d ", &nums[i]);
	
	scanf("%d %d", &min, &max);
	
	for(int i = 0; i < n; i++)
		if(nums[i] >= min && nums[i] <= max)
			if(i == n - 1)
				printf("%d \n", nums[i]);
			else
				printf("%d ", nums[i]);
	return(0);
}