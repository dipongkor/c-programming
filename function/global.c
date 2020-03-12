#include<stdio.h>
float calculate_circle_area(float radius);
float pi = 3.1416;
int main(){
    float area = calculate_circle_area(4.5);
    printf("%lf", pi);
    return 0;
}
float calculate_circle_area(float radius){
    float area = radius * radius * pi;
    pi = 3.141646;
    return area;
}