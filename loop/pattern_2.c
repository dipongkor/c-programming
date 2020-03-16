#include <stdio.h>

int main()
{
    int n = 5, i, j, k;
    for (i = 1; i <= n; i++)
    {
        //print space
        for (j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        //printf *
        for (k = 1; k<= 2*i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}