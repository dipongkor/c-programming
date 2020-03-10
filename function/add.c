#include<stdio.h>
int add(int a, int b);
float subtract(float x, float y);

int main(){
    int num1, num2, num3, num4;
    int sum = num1 + num2;
    int sum = num3 + num4;
    sum = subtract(10.5, 10);
    printf("%d", sum);
    return 0;
}
int add(int a, int b){
    int result = a + b;
    return result;
}

float subtract(float x, float y){
    return x - y;
}