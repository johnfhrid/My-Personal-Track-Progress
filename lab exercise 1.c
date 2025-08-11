#include <stdio.h>

int main ()
{
    // Problem 1
    int num1 = 0;
    scanf("%d",&num1);
    int num2 = 0;
    scanf("%d",&num2);

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            sum1 += i;
        }
    }

    for (int i = 1; i <= num2; i++)
    {
        if (num2 % i == 0)
        {
            sum2 += i;
        }
    }

    if (sum1 > sum2)
    {
        printf("%d has more factors than %d", num1, num2);
    }
    else if (sum2 > sum1)
    {
        printf("%d has more factors than %d", num1, num2);
    }
    else
    {
        printf("%d and %d have the same number", num2, num2);
    }
    return 0;
}
