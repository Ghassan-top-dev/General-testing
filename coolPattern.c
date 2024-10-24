#include <stdio.h>


int main(){


    int i = 1;
    int j; 

    while (i<=3){

        for (j=1; j <=i; j++)
        {
            printf("%d", j); 
        }

        printf("\n");
        i=i+1; 

    }
    
     while (i>=1){

        for (j=1; j <=i; j++)
        {
            printf("%d", j); 
        }

        printf("\n");
        i=i-1; 

    }



    return 0; 
}
