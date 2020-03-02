#include<stdio.h>
int main(){
    int row = 2, col = 2, i, j;
    int matrix[row][col];
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            printf("Enter [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}