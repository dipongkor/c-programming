#include <stdio.h>
int main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    *pc = 1;
    printf("%d", *pc); // Ouptut: 1
    printf("%d", c);   // Output: 1
    return 0;
}