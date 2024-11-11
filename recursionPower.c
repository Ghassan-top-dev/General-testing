#include <stdio.h>


int power(int x, int y); 


int main(){

    int recursive = power(16,2); 

    printf("%d", recursive); 




    return 0;
}





int power(int x, int y){

    if (y == 0) //base case
    {
        return 1; 
    }
    
    else //generic case (recursive case)
    {
        return x*(power(x, y-1)); 
    }
    
    




}


