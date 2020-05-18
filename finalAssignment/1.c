#include<stdio.h>
int main()
{
	int isPrime(int);

	int n1, n2, c_count = 1;

	scanf("%d %d", &n1, &n2);

	for(int i = n1; i <= n2; i++)
	{
		if(isPrime(i))
		{
			printf("%d ", i);
			c_count++;
		}
		
		if(c_count % 8 == 0)
		{
			printf("\n");
			c_count = 1;
		}
	}
	
	return(0);
}

int isPrime(int n)
{
	int ret = 1;
	for(int i = 2; i < n; i++)
		if(n % i == 0)
			{
				ret = 0;
				break;
			}
	return ret;
}

/*
	That's a first. ZyBooks didn't want me to enter the '\n' this time. That's cool.
	It could have been done with the assignments as well ¯\_(ツ)_/¯
*/