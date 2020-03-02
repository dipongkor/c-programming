#include <stdio.h>
int main()
{
    int i, total_students, sum = 0;
    float average;
    printf("Enter total number of students: ");
    scanf("%d", &total_students);

    int marks[total_students];
    for(i = 0; i<total_students; i++){
        printf("Enter marks of #%d: ", i +1);
        scanf("%d", &marks[i]);
        if(marks[i]<20)
        {
            marks[i]= marks[i] + 2;
        }
        sum += marks[i];
    }
    average = (float) sum / total_students;
    printf("Average is: %f", average);
    return 0;
}