#include<stdio.h>
int main(){
    int total_student, i;
    float sum = 0, marks, average;
    
    printf("Enter total number of students: ");
    scanf("%d", &total_student);
    
    for(i = 1; i <= total_student; ++i){
        printf("Enter marks of student #%d: ", i);
        scanf("%f", &marks);
        sum += marks;
    }
    
    average = sum/total_student;
    printf("Average marks is: %f", average);
    
    return 0;
}
