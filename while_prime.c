#include<stdio.h>
int main(){
    int i, is_prime = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    i = 2;
    while(i <= sqrt(number)){
        if(number%i == 0){
            is_prime = 0;
            break;
        }
        ++i;
    }
    if(is_prime){
        printf("%d is a prime number", number);
    }
    else{
        printf("%d is not a prime number", number);
    }
    return 0;
}

