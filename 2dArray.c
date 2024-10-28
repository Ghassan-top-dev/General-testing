#include <stdio.h>




int main(){

    int rows = 10;
    int cols = 10; 
    int temp = 0; 

    int arr2D[rows][cols];
    int i, j;


    //initalizer 

    for(i = 0; i < rows; i++){

        for (j = 0; j < cols; j++)
        {
            arr2D[i][j] = temp;
            temp++; 

        }
    
    } 


    for(i = 0; i < rows; i++){

        for (j = 0; j < cols; j++)
        {
            if(arr2D[i][j] < 10){

                printf("%d  ", arr2D[i][j]);

            }
            else{

                printf("%d ", arr2D[i][j]);

            }

        }
        printf("\n"); 
    
    } 






    return 0;
}
