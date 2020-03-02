#include<stdio.h>
int main(){
    int i = 1, sum = 0;
    do{
        sum += i;
        ++i;
    }
    while (i <= 100);
    printf("Sum of 1 to 100 is %d", sum);
    return 0;
}
