#include <stdio.h>

#define N 3

void print2D (int arr[N][N]) ;
int isLeftdEqualToRightd (int arr [N][N], int *, int *);

int main () {

   int arr [N][N];
   int i, j;
   int result, sumLeftD, sumRightD;
   
   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
          scanf ("%d", &arr [i][j]);
      }
    }
    
    result = isLeftdEqualToRightd (arr, &sumLeftD, &sumRightD);
    
    print2D(arr);
    
    printf ("Sum of left diagonal = %d\n", sumLeftD);
    printf ("Sum of right diagonal = %d\n", sumRightD);
    
    if (result) {
       printf ("Sum of left diagonal is equal to sum of right diagonal\n");
    }
    else {
        printf ("Sum of left diagonal is not equal to sum of right diagonal\n");
    }
    
   return 0;
}


void print2D (int arr[N][N]){


   for (int i = 0; i < N; i++){

      printf("Row %d", i); 

      for (int j = 0; j < N; j++){

         printf("%d", arr[i][j]); 
         
      }

      printf("\n"); 
      

   }
   
}


int isLeftdEqualToRightd (int arr [N][N], int * sumLeftD, int * sumRightD){

   int i, j; 
   *sumLeftD = 0; 
   *sumRightD = 0; 
   
   for (i = 0; i < 3; i++)
   {
      
      *sumLeftD = *sumLeftD + arr[i][i]; 

      *sumRightD = *sumRightD + arr[i][N - 1 - i]; 

   
   
   }

   
   

   if (*sumLeftD == *sumRightD)
   {
      return 1;
   }else if(*sumLeftD != *sumRightD){
      return 0;
   }

   return -1; 
   
   
   

   
   




}

