#include<stdio.h>
int main(){
    int number, sum = 0, temp_number;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp_number = number;
    while(number !=0){
        sum = sum + number%10;
        number = number/10;
    }
    printf("Digit sum of %d is: %d", temp_number, sum);
    return 0;
}
