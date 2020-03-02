#include<stdio.h>
int main(){
    int row ,col, i, j;
    printf("Enter row & column: ");
    scanf("%d%d", &row, &col);
    int matrix1[row][col], matrix2[row][col], sum[row][col];
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            printf("Enter matrix1[%d,%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            printf("Enter matrix2[%d,%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of matrix 1 & 2:\n");
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}