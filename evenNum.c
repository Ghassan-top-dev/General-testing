#include <stdio.h>


//input = 2879, function returns 2

int ww10Q4(int n); 



int main(){



    int evenNum = ww10Q4(123456789);


    printf("%d", evenNum); 









    return 0; 
}



int ww10Q4(int n){

    int dig; 
    if (n==0)
    {
        return 0; 
    }


    else{

        dig = n % 10; 

        if (dig % 2 == 0)
        {
            return 1 + ww10Q4(n / 10); 
        }

        else
        {
            return ww10Q4(n / 10); 
        }
        
        


    }
    




    
}
