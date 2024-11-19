#include <stdio.h>
#include <string.h>




int hashScore(char sentence[], int range);


int main(){
    int prime = 0; 
    int finalHashScore; 


    char buffer[64] = "\0"; 

    printf("Enter a sentence (max 50 characters): ");
    fgets(buffer, sizeof(buffer), stdin); 
    buffer[strcspn(buffer, "\n")] = '\0';


    printf("Enter a prime number: ");
    scanf("%d", &prime); 


    finalHashScore = hashScore(buffer, prime); 
    
    printf("The hash score for the given sentence is: %d\n", finalHashScore);



    return 0; 
}



int hashScore(char sentence[], int range){

    int finalHash = 0; 
    int sumBasedOnAsciiAndIndex = 0; 

    for (int i = 0; i < strlen(sentence); i++)
    {
        sumBasedOnAsciiAndIndex += sentence[i] * i; 
    }

    finalHash = sumBasedOnAsciiAndIndex % range; 

    return finalHash; 
}
