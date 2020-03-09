#include<stdio.h>
int main()
{
    int n, prev, cnt = -1;
    
    int ascending(int);
    int descending(int);
    int absDiff(int, int);
    int isRep(int);
    
    scanf("%d", &n);

    if(!isRep(n))
    {
        while(prev != n)
        {
            cnt++;
            prev = n;
            n = absDiff(ascending(n), descending(n));
        }
        printf("%d", cnt);
    }

    else
        printf("INVALID");

    return (0);
}

int ascending(int num)
{
    int sorted = 0, digits = 10, sortedDigits = 1, init = 1;

    while (num > 0) {
        int digit = num % 10;

        if (!init) {

            int tmp = sorted, toDivide = 1;

            for (int i = 0; i < sortedDigits; i++)
            {                
                int tmpDigit = tmp % 10;
                
                if (digit >= tmpDigit)
                {
                    sorted = sorted/toDivide*toDivide*10 + digit*toDivide + sorted % toDivide;
                    break;
                }
                
                else if (i == sortedDigits-1)
                    sorted = digit * digits + sorted;
                tmp /= 10;
                toDivide *= 10;
            }

            digits *= 10;
            sortedDigits += 1;
        }

        else
            sorted = digit;
        
        init = 0;
        num = num / 10;
    }

    return sorted;    
}

int descending(int num)
{
    int sorted = 0, digits = 10, sortedDigits = 1, init = 1;

    while (num > 0) {
        int digit = num % 10;

        if (!init)
        {
            int tmp = sorted, toDivide = 1;

            for(int i = 0; i < sortedDigits; i++)
            {
                int tmpDigit = tmp % 10;

                if (digit <= tmpDigit)
                {
                    sorted = sorted/toDivide*toDivide*10 + digit*toDivide + sorted % toDivide;
                    break;
                }
                
                else if (i == sortedDigits-1)
                    sorted = digit * digits + sorted;
                
                tmp /= 10;
                toDivide *= 10;
            }

            digits *= 10;
            sortedDigits += 1;
        } 

        else
            sorted = digit;

        init = 0;
        num = num / 10;
    }

    return sorted;    
}

int absDiff(int a, int b)
{
    if(a >= b)
        return (a - b);
    else
        return (b - a);
}

int isRep(int n)
{
    int dig1, dig2, init = 1, cnt1 = 1, cnt2 = 1;
    
    while(n > 0)
    {
        if(init)
        {
            dig1 = n % 10;
            init = 0;
        }
        else
        {
            if(dig1 == (n % 10))
                cnt1++;
            else if(dig2 == (n % 10))
                cnt2++;
            else
            {
                dig2 = n % 10;
            }
            
        }

        n /= 10;
    }

    if(cnt1 > 2 || cnt2 > 2)
        return 1;
    else
        return 0;
}