#include <stdio.h>

int main() {
	int n,  a[20], min;
	scanf("%d ", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d ", &a[i]);
		if(i == 0)
			min = a[i];
		else
			if(min > a[i])
			min = a[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		a[i] -= min;
		if(i != n -1)
			printf("%d ", a[i]);
		else
			printf("%d \n", a[i]);
	}
	return 0;
}