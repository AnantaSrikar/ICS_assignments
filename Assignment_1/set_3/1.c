#include<stdio.h>
#include<string.h>
int main()
{
    int n, fn = 0;
    char func[7];

    printf("Enter a number : ");
    scanf("%d", &n);
    printf("OUTPUT: Do you want the sum of first %d numbers or their product? ", n);

    fgets(func, sizeof(func), stdin);

    if(strcmp("SUM", func) == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fn += i;
        }

        printf("Sum = %d", fn);
    }

    else if(strcmp("PRODUCT", func) == 0)
    {
        fn = 1;
        for (int i = i; i <= n; i++)
        {
            fn *= i;
        }

        printf("Product = %d", fn);
    }

    return(0);
}