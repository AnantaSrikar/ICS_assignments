#include<stdio.h>

void CreateAcronym(char userPhrase[], char userAcronym[])
{
	int j = 0;

	for(int i = 0; userPhrase[i] != '\0'; i++)
		if(userPhrase[i] >= 'A' && userPhrase[i] <= 'Z')
			userAcronym[j++] = userPhrase[i];
	
	userAcronym[j] = '\0';
}

int main()
{
	char userPhrase[100], userAcronym[100];
	
	scanf("%[^\n]s", userPhrase);

	CreateAcronym(userPhrase, userAcronym);

	printf("%s\n", userAcronym);

	return(0);
}

/*
	Well I've started to develop some kind of weird closeness to C, even
	thought ik we can do a loot in python. I got a lil bored of doin 
	Ethics "research" project, so thought I'd treat myself to a programming
	break. And also yeah hope quarantine gets over real quickly and the 
	pandemic is done. Wrote a lil too much here XD, more in next code
*/