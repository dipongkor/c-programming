#include <stdio.h>
int main()
{
    int n = 20, i, j, k;
    for (i = 1; i <= n; i++)
    {
        //print space
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        //printf *
        for (k = 0; k <= n - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}