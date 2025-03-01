#include "givenA2.h"


int readContacts (char * fileName){
    
    FILE *file = fopen(fileName, "a+");  // Open for reading & appending
    
    if (file == NULL) {
        printf("Error opening file");
        return -1;  // Exit with an error code
    }

    // determine end of file
    long endOfFile;
    fseek(file, 0, SEEK_END);  // Move to the end
    endOfFile = ftell(file); // Store the end position
    printf("\nEnd of File Position: %ld\n", endOfFile);

    // Move to the beginning of the file
    fseek(file, 0, SEEK_SET);

    struct contact retrievedContact; 

    // Now retrievedContact contains the data from the file
    while (fread(&retrievedContact, sizeof(struct contact), 1, file) == 1)
    {

        printf("\n\n************************************************************\n\n");


        fseek(file, retrievedContact.empIdPosn, SEEK_SET);
        int employeeIDRead;
        fread(&employeeIDRead, sizeof(int), 1, file);

        printf("Employee ID:%d\n", employeeIDRead);
        // printf("First Name:%ld\n", retrievedContact.firstNamePosn);
        // printf("Last Name: %ld\n", retrievedContact.lastNamePosn);
        // printf("Email: %ld\n", retrievedContact.emailPosn);
        // printf("NEXT: %ld\n", retrievedContact.next);



        printf("\n************************************************************\n\n");



    }



    fclose(file);

    return  0; 


}
