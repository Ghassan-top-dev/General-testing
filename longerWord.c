#include <stdio.h>
#include <string.h>



int main(){

    char userInput1[512]; 

    char userInput2[512]; 
    int lengthOfWord1, lengthOfWord2;



    
    printf("Enter a string: ");
    
    scanf("%s", userInput1);

    printf("Enter another string: ");
    
    scanf("%s", userInput2);

    if ((lengthOfWord1 = (int)strlen(userInput1)) > (lengthOfWord2 = (int)strlen(userInput2))) {

        printf("word 1 is longer");
    
    }else {
        printf("word 2 is longer");

    }









    return 0; 
}
