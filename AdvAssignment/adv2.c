#include<stdio.h>
int main()
{
	void dispRoster(int *, int *);
	void menu(int *, int *);

	int jno[5], p_rating[5];
	for(int i = 0; i < 5; i++)
	{
		printf("Enter player %d's jersey number:\n", (i + 1));
		scanf("%d", &jno[i]);

		printf("Enter player %d's rating:\n", (i + 1));
		scanf("%d", &p_rating[i]);
		
		printf("\n");
	}

	dispRoster(jno, p_rating);
	menu(jno, p_rating);

	return(0);
}

void dispRoster(int *jno, int *p_rating)
{
	printf("ROSTER\n");
	for(int i = 0; i < 5; i++, jno++, p_rating++)
		printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), *jno, *p_rating);
	printf("\n");
}

void updateRating(int *jno, int *p_rating)
{
	int update_jno, new_rating;
	
	printf("Enter a jersey nuber:\n");
	scanf("%d", &update_jno);

	printf("Enter a new rating for player:\n");
	scanf("%d", &new_rating);

	for(int i = 0; i < 5; i++, jno++, p_rating++)
		if(*jno == update_jno)
		{
			*p_rating = new_rating;
			break;
		}
}

void replacePlayer(int *jno, int *p_rating)
{
	int find_jno, new_jno, new_rating;

	printf("Enter a jersey number:\n");
	scanf("%d", &find_jno);

	printf("Enter a new jersey number:\n");
	scanf("%d", &new_jno);

	printf("Enter a rating for the new player:\n");
	scanf("%d", &new_rating);

	for(int i = 0; i < 5; i++, jno++, p_rating++)
		if(find_jno == *jno)
		{
			*jno = new_jno;
			*p_rating = new_rating;
		}
}

void aboveRating(int *jno, int *p_rating)
{
	int rating;
	
	printf("Enter a rating:\n");
	scanf("%d", &rating);

	printf("ABOVE %d\n", rating);
	
	for(int i = 0; i < 5; i++, jno++, p_rating++)
		if(*p_rating > rating)
			printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), *jno, *p_rating);
	printf("\n");
}

void menu(int *jno, int *p_rating)
{
	char opt;
	while(opt != 'q')
	{
		printf("MENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n\n");
		printf("Choose an option:\n");
		scanf(" %c", &opt);
		switch(opt)
		{
			case 'u':
					updateRating(jno, p_rating);
					break;
			
			case 'a':
					aboveRating(jno, p_rating);
					break;
			
			case 'r':
					replacePlayer(jno, p_rating);;
					break;

			case 'o':
					dispRoster(jno, p_rating);
					break;
			
			case 'q':
					//quit
					;
		}
	}
}

/* 
	Not gonna lie this reminds me of my 12th standard hotel management system project, except that used file handling.
	Good old times, used the TURBO C++ compiler (don't judge me), but yeah they did teach a loot. Thank you sir
	for reminding me of those days. 
*/