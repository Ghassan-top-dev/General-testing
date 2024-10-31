#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("words.txt", "r");

    


    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int counter = 0;
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        counter++;
    }

    // Now feof(file) will be true after the loop finishes if end of file was reached
    if (feof(file)) {
        printf("\nTotal lines read: %d\n", counter);
    }

    fclose(file);
    return 0; 
}

