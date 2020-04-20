#include<stdio.h>
#include<string.h>
int main()
{
	char strs[10][50];
	int cnt = -1;
	do{
		cnt++;
		// scanf("%[^\n]s", strs[cnt]); IDK this just didn't work out
		fgets(strs[cnt], 50, stdin);
	}while(!(strcmp(strs[cnt], "Quit\n") == 0 || strcmp(strs[cnt], "quit\n") == 0 || strcmp(strs[cnt], "q\n") == 0));

	for(int i = 0; i < cnt; i++)
	{
		for(int j = strlen(strs[i])- 2; j >= 0; j--)
			printf("%c", strs[i][j]);
		printf("\n");
	}
	return(0);
}