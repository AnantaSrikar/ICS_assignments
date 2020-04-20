#include<stdio.h>
#include<limits.h>
int main()
{
	int n, firstSmall, secondSmall;
	scanf("%d ", &n);
	int nums[n];
	for(int i = 0; i < n; i++)
		scanf("%d ", &nums[i]);
	
	firstSmall = secondSmall = INT_MAX;

	for(int i = 0; i < n; i++)
		if(nums[i] < firstSmall)
		{
			secondSmall = firstSmall;
			firstSmall = nums[i];
		}

		else if(nums[i] < secondSmall && nums[i] != firstSmall)
			secondSmall = nums[i];
	
	printf("%d %d\n", firstSmall, secondSmall);
	
	return(0);
}