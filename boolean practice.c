#include <stdio.h>
#include <stdbool.h>

int main ()
{
    bool prime = true;
    int num = 0;
    scanf("%d",&num);
    for (int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            prime = false;
        }
    }
    (prime) ? printf("is a Prime Number") : printf("is not a Prime number");
    return 0;
}
