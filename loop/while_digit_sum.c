#include<stdio.h>
int main(){
int number, sum = 0;
printf("Enter a number: ");
scanf("%d", &number);
while(number !=0){
    sum = sum + number%10;
    number = number/10;
}
printf("Digit sum of is: %d", sum);
    return 0;
}

