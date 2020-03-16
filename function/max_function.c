#include<stdio.h>
float find_max_marks(float marks[], int n);
int main(){
    float marks[4] = {11.2, 15.5, 18.2, 20.0};
    printf("%f", find_max_marks(marks, 4));
    return 0;
}
float find_max_marks(float marks[], int n){
    float max_marks = marks[0];
    int i;
    for ( i = 0; i < n; i++)
    {
        if (max_marks < marks[i]){
            max_marks = marks[i];
        }
    }
    return max_marks;
}