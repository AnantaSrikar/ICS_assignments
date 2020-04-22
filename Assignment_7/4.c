#include<stdio.h>

int LargestNumber(int userNum1, int userNum2, int userNum3)
{
	return (userNum1 > userNum2)?((userNum1 > userNum3)?userNum1:userNum3):((userNum2 > userNum3)?userNum2:userNum3);
}

int SmallestNumber(int userNum1, int userNum2, int userNum3)
{
	return (userNum1 < userNum2)?((userNum1 < userNum3)?userNum1:userNum3):((userNum2 < userNum3)?userNum2:userNum3);
}

int main()
{
	int userNum1, userNum2, userNum3;
	scanf("%d %d %d", &userNum1, &userNum2, &userNum3);

	printf("largest: %d", LargestNumber(userNum1, userNum2, userNum3));
	printf("\nsmallest: %d\n", SmallestNumber(userNum1, userNum2, userNum3));

	return(0);
}

/*
	Conditional statements are cool, finished the whole function without using one if, that makes them soo cool XD.
	And as usual, stupid \n after the printf cuz of zyBooks (hmph!)
*/