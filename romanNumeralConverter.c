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

int main(){

    char numeral1[100] = "\0"; 
    char numeral2[100] = "\0"; 
    char final[100] = "\0"; 


    printf("Enter the first Roman numeral: "); 
    fgets(numeral1, sizeof(numeral1), stdin); 
    numeral1[strcspn(numeral1, "\n")] = '\0';



    printf("Enter the second Roman numeral: "); 
    fgets(numeral2, sizeof(numeral2), stdin); 
    numeral2[strcspn(numeral2, "\n")] = '\0';

    

    int valueOfNum1 = letterToNumber(numeral1); 
    printf("This is the integer value of numeral 1: %d", valueOfNum1); 
    printf("\n\n\n"); 


    strcat(numeral1, numeral2); 
    strcat(final, numeral1); 
    printf("Result = %s\n", final); 


    return 0;
}



//  for (int i = 0; i < 100; i++)
//     {
//         scanf(" %c", &numeral1[i]); 
//         if (numeral1[i] == '\n')
//         {
//             break; 
//         }
        
//     }




// for (int i = 0; i < 100; i++)
    // {
    //     scanf(" %c", &numeral1[i]); 
    // }



    // printf("Enter the second Roman numeral: "); 

    // for (int i = 0; i < 100; i++)
    // {
    //     scanf(" %c", &numeral2[i]); 
    // }






    // printf("Enter the first Roman numeral: "); 
    // fgets(numeral1, sizeof(numeral1), stdin); 


    // printf("Enter the second Roman numeral: "); 
    // fgets(numeral2, sizeof(numeral2), stdin); 
