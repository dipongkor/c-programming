#include<stdio.h>
int main(){ 
    int total_student, i, total_negetive_marks = 0;
    float sum = 0, marks, average;
    printf("Enter total number of students: ");
    scanf("%d", &total_student);
    for(i = 1; i <= total_student; ++i){
        printf("Enter marks of student #%d: ", i);
        scanf("%f", &marks);
        if(marks < 0){
            ++total_negetive_marks;
            continue;
        }
        sum += marks;
    }
    average = sum/(total_student - total_negetive_marks);
    printf("Average marks is: %f", average);
    return 0;
}

