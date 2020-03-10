#include<stdio.h>
#include<math.h>
int main(){
    int number;
    float square_root;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number <0)
        {
            break;
        }
        square_root = sqrt(number);
        printf("Square root of %d is %f\n", number, square_root);
    }
    return 0;
}