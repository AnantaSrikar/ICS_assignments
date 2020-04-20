#include<stdio.h>
int main()
{
	int u[3], v[3];
	for(int i = 0; i < 3; i++)
		scanf("%d ", &u[i]);
	
	for(int i = 0; i < 3; i++)
		scanf("%d ", &v[i]);
	
	int dot = 0, cross[3];
	
	for(int i = 0; i < 3; i++)
		dot += u[i] * v[i];
	
	cross[0] = (u[1] * v[2]) - (u[2] * v[1]);
	cross[1] = (u[2] * v[0]) - (u[0] * v[2]);
	cross[2] = (u[0] * v[1]) - (u[1] * v[0]);

	printf("%d\n[%d, %d, %d]", dot, cross[0], cross[1], cross[2]);
	return(0);
}