#include<stdio.h>
//I personally don't like to declare functions before main(), but then meh it's a zyBooks thing
double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon)
{
	return dollarsPerGallon * (drivenMiles / milesPerGallon);
}

int main()
{
	double milesPerGallon, dollarsPerGallon;

	scanf("%lf %lf", &milesPerGallon, &dollarsPerGallon);
	printf("%0.2lf %0.2lf %0.2lf\n", DrivingCost(10, milesPerGallon, dollarsPerGallon), DrivingCost(50, milesPerGallon, dollarsPerGallon), DrivingCost(400, milesPerGallon, dollarsPerGallon));

	return(0);
}