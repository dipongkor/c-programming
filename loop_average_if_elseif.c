#include<stdio.h>
int main(){
    int total_student, i;
    float sum = 0, marks, average;
    printf("Enter total number of students: ");
    scanf("%d", &total_student);
    for(i = 1; i <= total_student; ++i){

            if(i == 1)
            {
                printf("Enter the marks of 1st student: ");
            }
            else if(i == 2){
                printf("Enter the marks of 2nd student: ");
            }
            else if(i == 3){
                printf("Enter the marks of 3rd student: ");
            }
            else
            {
                printf("Enter the marks of %dth student: ", i);
            }

            scanf("%f", &marks);
            sum += marks;
    }
    average = sum/total_student;
    printf("Average marks is: %f", average);
return 0;
}
