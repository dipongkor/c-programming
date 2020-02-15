#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, is_prime;
    for (j = 1; j <= 10; j++)
    {
        is_prime = 1;
        for (i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d\n", j);
        }
    }
    return 0;
}