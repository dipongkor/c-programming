#include <stdio.h>
int main()
{
    char pattern[] = "*********";
    int i, w = 6, p = 6;
    for (i = 0; i < 6; i++)
    {
        printf("%-*.*s\n", w, p, pattern);
        --p;
    }
    return 0;
}