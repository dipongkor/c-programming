#include<stdio.h>
float calculate_circle_area(float radius);
float calculate_cylinder_area(float radius, float height);
float pi = 3.1416;
int main(){
    float cylinder_area = calculate_cylinder_area(4.5, 5.0);
    float area = calculate_circle_area(4.5);
    printf("%lf", pi);
    return 0;
}
float calculate_circle_area(float radius){
    float area = radius * radius * pi;
    pi = 3.141646;
    return area;
}
float calculate_cylinder_area(float radius, float height){
    return pi * radius * radius * height;
}