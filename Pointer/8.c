#include <stdio.h>
void change(int* num);
int main()
{
    int x = 100;
    printf("Before function call x=%d \n", x);
    change(&x);
    printf("After function call x=%d \n", x);
    return 0;
}
void change(int* num)
{
    *num + 100;
}