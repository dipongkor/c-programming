#include<stdio.h>
#include<math.h>
int main(){
    int i, is_prime, number;
    number = 5;
    is_prime = 1;
    for(i=2; i <= sqrt(number); i++){
        if(number%i == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime){
        printf("%d is a prime number", number);
    }
    else{
        printf("%d is not a prime number", number);
    }
    return 0;
}
