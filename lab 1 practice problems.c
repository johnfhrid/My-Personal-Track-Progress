#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int num = 0;
    int sum = 0;

    while (true)
    {
        scanf("%d",&num);

        if (num % 3== 0)
        {
            sum += num;
        }
        if (num < 1)
        {
            break;
        }

    }
    printf("%d",sum);
    return 0;
}
