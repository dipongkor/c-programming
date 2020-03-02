#include<stdio.h>
int main(){
    int total_student, i;
    float sum = 0, marks, average;
    printf("Enter total number of students: ");
    scanf("%d", &total_student);
    i = 1;
    while(i <= total_student){
        printf("Enter marks of student #%d: ", i);
        scanf("%f", &marks);
        sum += marks;
        ++i;
    }
    average = sum/total_student;
    printf("Average marks is: %f", average);
return 0;
}

