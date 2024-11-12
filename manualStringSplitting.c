#include <stdio.h>
#include <string.h>




int main(){

    char fullUserInput[32] = "5666*3200";
    char beforeOperator[32] = "\0"; 
    char afterOperator[32] = "\0"; 

    int indexForBefore = 0;
    int indexForAfter = 0;


    int length = strlen(fullUserInput); 

    for (int i = 0; i < length; i++)
    {
        if (fullUserInput[i] == '*')
        {
            for (int j = 0; j < i; j++)
            {
                beforeOperator[indexForBefore++] = fullUserInput[j]; 
            }
            beforeOperator[indexForBefore] = '\0';



            for (int j = i + 1; j < length; j++)
            {
                afterOperator[indexForAfter++] = fullUserInput[j]; 
            }
            beforeOperator[indexForAfter] = '\0';

            
        
        }
        
    }


    
    
    
    
    
    printf("\n\n\n"); 
    printf("%s \n", beforeOperator); 
    printf("%s", afterOperator); 


    return 0; 
}




