#include <stdio.h>


//write a recursive function called factorial that finds the 
//factorial of a number n (i.e., n!).

//factorial (4) = 4 * 3 * 2 * 1OR 1 * 2 * 3 * 4


int main(){

    long long prod = 1;


    for (int i = 1; i <=16 ; i++)
    {
        prod *= i;     
    }

    printf("%lld", prod); 




    return 0;
}



