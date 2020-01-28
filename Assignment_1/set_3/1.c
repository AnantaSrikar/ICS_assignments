#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sqart;

    printf("Enter a no : ");
    scanf("%d", &n);
    sqart = sqrt(n);
    printf("Square root = %f\n", sqart);  
    return(0);
}