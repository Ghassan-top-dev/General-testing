#include <stdio.h>
#include <string.h>



int main(){

    //banned letters - gkmqvwxz
    int i,j;

    int checker = 0;

char banned[16] = {'g', 'k', 'm', 'q', 'v', 'w', 'x', 'z', 
                   'G', 'K', 'M', 'Q', 'V', 'W', 'X', 'Z'};

    char userInput[512]; 

    printf("Enter a string: ");
    
        scanf("%s", userInput);

        printf("%s", userInput);
        
        int lengthOfWord = (int)strlen(userInput);

        printf("\n%d", lengthOfWord); 

        for (i = 0; i<lengthOfWord; i++) {

            for (j = 0; j<16; j++) {

                if (userInput[i] == banned[j]) {
                    checker = 1; 

                    break; 
                
                }
            }
        }
        printf("\n"); 
        if (checker == 0) {

            printf("The word %s is legal", userInput);
        
        }

        if (checker == 1) {

            printf("The word %s is illegal", userInput);
        
        }


    return 0; 
}
