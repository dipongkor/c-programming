#include<stdio.h>

int main(){
    int array [6] = {4,5,5,5,8,7};
    int i,j, totail_duplicate = 0;

    for(i=0; i <6; i++){
        for ( j = i+1; j < 6; j++)
        {
          if (array[i] == array[j]){
             ++totail_duplicate;
          }
        }
    }
    printf("Total duplicates = %d", totail_duplicate);
    return 0;
}