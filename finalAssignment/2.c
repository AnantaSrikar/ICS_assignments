#include<stdio.h>
int main()
{
	void printPerm(int, int);

	int n1, n2;
	
	scanf("%d %d", &n1, &n2);
	
	printPerm(n1, n2);

	return(0);
}

void printPerm(int n1, int n2)
{
	int cnt = 1;
	
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			if(i != j)
				for(int k = 0; k < 4; k++)
					if(k != i && k != j)
						for(int l = 0; l < 4; l++)
							if(l != i && l != j && l != k)
								{
									if(cnt >= n1 && cnt <= n2)
										printf("permutation #%d is %d%d%d%d\n",cnt , i, j, k, l);
									cnt++;
								}
}

/*
	Yeah. I know this is a very bad way of permutating. Hopefully I'll find a better algorithm
	in the future. For now, this is it.
*/