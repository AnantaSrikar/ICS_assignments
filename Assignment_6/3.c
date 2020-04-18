#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d ", &n);
	char words[n][20];
	char ch;
	for(int i = 0; i < n; i++)
		scanf("%s ", &words[i]);

	scanf("%c", &ch);

	for(int i = 0; i < n; i++)
		for(int j = 0; j < strlen(words[i]); j++)
			if(words[i][j] == ch)
			{
				printf("%s\n", words[i]);
				break;
			}
}