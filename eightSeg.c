#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    file = fopen("words.txt", "r");

    int i,j;

    int checker = 0;

    char banned[16] = {'g', 'k', 'm', 'q', 'v', 'w', 'x', 'z', 
                        'G', 'K', 'M', 'Q', 'V', 'W', 'X', 'Z'};    
    char buffer[512];
    char longestWord[512]; 
    int lengthOfWord1; 
    int lengthOfWord2; 



    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }


    while (fgets(buffer, sizeof(buffer), file) != NULL) {

        lengthOfWord1 = (int)strlen(buffer);

        

        for (i = 0; i<lengthOfWord1; i++) {

            for (j = 0; j<16; j++) {

                if (buffer[i] == banned[j]) {
                    checker = 1; 
                    break;
                
                }
                 
            }
            if (buffer[i] == banned[j]) break; 
        }

        if (checker == 0) {

            if (lengthOfWord1 > (lengthOfWord2 = (int)strlen(longestWord))) {

                strcpy(longestWord,buffer);
    
            }
                    
        } 
        
        checker = 0; 

    }

    if (feof(file)) {
        printf("\nLongest word is: %s\n", longestWord);
    }

    fclose(file);
    return 0; 
}


