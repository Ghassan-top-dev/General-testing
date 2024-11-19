#include <stdio.h>
#include <string.h>

int letterToNumber(char numeral[]){

    int counter = 0;

    int X = 10;
    int V = 5;
    int I = 1; 

    
    for (int i = 0; i < strlen(numeral); i++)
    {
        if (numeral[i] == 'I' && numeral[i+1] == 'X')
        {
            counter += 9;
            i++; 
        }
        else if (numeral[i] == 'I' && numeral[i+1] == 'V')
        {
            counter += 4;
            i++; 
        }
        else if(numeral[i] == 'X'){
            counter += 10;
        }
        else if(numeral[i] == 'V'){
            counter += 5;
        }
        else if(numeral[i] == 'I'){
            counter += 1;
        }
    }

    return counter; 

}


const char* numberToLetter(int totalValue) {
    static char final[100]; // Static ensures the variable persists after function returns
    final[0] = '\0';        // Initialize as an empty string

    int j = totalValue;

    for (int i = 0; i < totalValue; i++) {
        if (j >= 10) {
            strcat(final, "X");
            j -= 10;
        }
        else if(j >= 9){

            strcat(final, "IX");
            j -= 9;

        }
        else if(j >= 5){

            strcat(final, "V");
            j -= 5;

        }
        else if(j >= 4){

            strcat(final, "IV");
            j -= 4;

        }
        else if(j >= 1){

            strcat(final, "I");
            j -= 1;

        }
    }

    return final; // Safe to return since `final` is static
}

int main(){

    char numeral1[100] = "\0"; 
    char numeral2[100] = "\0"; 
    const char* final;
    int totalValue = 0;


    printf("Enter the first Roman numeral: "); 
    fgets(numeral1, sizeof(numeral1), stdin); 
    numeral1[strcspn(numeral1, "\n")] = '\0';
    int valueOfNum1 = letterToNumber(numeral1); 


    printf("Enter the second Roman numeral: "); 
    fgets(numeral2, sizeof(numeral2), stdin); 
    numeral2[strcspn(numeral2, "\n")] = '\0';
    int valueOfNum2 = letterToNumber(numeral2); 

    totalValue = valueOfNum1 + valueOfNum2; 

    printf("This is the integer value of numeral 1: %d\n\n", valueOfNum1); 
    printf("This is the integer value of numeral 2: %d\n\n", valueOfNum2); 
    printf("This is the integer value of both: %d\n\n", totalValue); 


    printf("\n\n\n"); 

    final = numberToLetter(totalValue); 

    printf("The final string: %s", final); 


    return 0;
}

