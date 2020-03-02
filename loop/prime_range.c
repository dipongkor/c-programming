#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, is_prime, max_number;
    scanf("%d", &max_number);

    for (j = 2; j <= max_number; j++)
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
            printf("%d is prime\n", j);
        }
        else
        {
            printf("%d is not prime\n", j);
        }
        
    }
    return 0;
}