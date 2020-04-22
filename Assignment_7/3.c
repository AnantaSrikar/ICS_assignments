#include<stdio.h>
#include<string.h>

void IntegerToReverseBinary(int integerValue, char binaryValue[])
{
	int temp = integerValue, count = 0;
	while(temp > 0)
	{
		binaryValue[count] = '0' + (temp % 2) ;
		temp /= 2;
		count++;
	}
	binaryValue[count] = '\0';
}

void ReverseString(char inputString[], char reversedString[])
{
	for(int i = strlen(inputString) - 1; i >= 0; i--)
		reversedString[strlen(inputString) - 1 - i] = inputString[i];
	reversedString[strlen(inputString)] = '\0';
}

int main()
{
	int num;
	char input[10], output[10];

	scanf("%d", &num);

	IntegerToReverseBinary(num, input);
	ReverseString(input, output);

	printf("%s\n", output);

	return(0);
}

/*
	Wow this is soo cool we can directly send arrays across functions. They are pointers though, but this way
	would also work. New way of working with arrays in functions. So cool. Also this is the last time I'll be
	angry with zyBook, screw \n, it is really annoying. See ya DomJudge.
*/