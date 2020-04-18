#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d ", &n);
	char strs[n][20];
	int cnt[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%s ", &strs[i]);
		cnt[i] = 1;
	}

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(i != j && strcmp(strs[i], strs[j]) == 0)
				cnt[i]++;

	for(int i = 0; i < n; i++)
		printf("%s %d\n", strs[i], cnt[i]);
	
	return(0);
}