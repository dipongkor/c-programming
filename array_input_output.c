#include <stdio.h>

int main()
{
    int marks[5];
    marks[0] = 20;
    marks[1] = 18;
    marks[2] = 19;
    marks[3] = 17;
    marks[4] = 22;

    int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    printf("Average is: %f", (float)sum / 5);
    return 0;
}