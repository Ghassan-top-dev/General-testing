#include "givenA2.h"

void createContacts (char * fileName){
    FILE *file = fopen(fileName, "a+");  // Open for reading & appending

    struct contact newContact;

    char buff[256];  // Buffer for input
    int userID;
    char *endptr;

    do
    {
        // EMPLOYEE ID
        printf("Employee Id: ");
        fgets(buff, sizeof(buff), stdin);  // Read input as a string

        // Convert to integer safely
        userID = strtol(buff, &endptr, 10);
    } while (userID < 1 || userID > 9999 || (*endptr != '\n' && *endptr != '\0'));

    // FIRST NAME
    printf("First Name: ");
    fgets(buff, 256, stdin);  // Read input into buffer

    // Dynamically allocate memory for exact string length
    size_t lenF = strlen(buff);
    
    if (buff[lenF - 1] == '\n') {
        buff[lenF - 1] = '\0'; // Remove newline character
        lenF--;
    }

    char *firstName = malloc(lenF + 1); // Allocate exact size needed
    if (firstName) {
        strcpy(firstName, buff); // Copy the string into allocated memory
    }

    // LAST NAME
    printf("Last Name: ");
    fgets(buff, 256, stdin);  // Read input into buffer

    // Dynamically allocate memory for exact string length
    size_t lenL = strlen(buff);
    if (buff[lenL - 1] == '\n') {
        buff[lenL - 1] = '\0'; // Remove newline character
        lenL--;
    }

    char *lastName = malloc(lenL + 1); // Allocate exact size needed
    
    if (lastName) {
        strcpy(lastName, buff); // Copy the string into allocated memory
    }

    // EMAIL
    printf("Email: ");
    fgets(buff, 256, stdin);  // Read input into buffer

    // Dynamically allocate memory for exact string length
    size_t lenE = strlen(buff);
    if (buff[lenE - 1] == '\n') {
        buff[lenE - 1] = '\0'; // Remove newline character
        lenE--;
    }

    char *emailStr = malloc(lenE + 1); // Allocate exact size needed
    if (emailStr) {
        strcpy(emailStr, buff); // Copy the string into allocated memory
    }




    // INSERT VALUES INTO FILE
    fseek(file, 0, SEEK_END);

    long currentPos = ftell(file);

    // if (currentPos == 0)
    // {
    //     newContact.next = 40;
    // }
    
    long dataStart = currentPos + 40;


    // Fill in the struct with positions
    newContact.empIdPosn = dataStart;
    newContact.firstNamePosn = dataStart + sizeof(int);
    newContact.lastNamePosn = newContact.firstNamePosn + strlen(firstName) + 1;
    newContact.emailPosn = newContact.lastNamePosn + strlen(lastName) + 1;
    newContact.next = newContact.emailPosn + strlen(emailStr) + 1;


    // write the struct to the file
    fseek(file, 0, SEEK_END);
    fwrite(&newContact, sizeof(struct contact), 1, file);


    // Write actual data at their respective positions
    fseek(file, newContact.empIdPosn, SEEK_SET);
    fwrite(&userID, sizeof(int), 1, file);

    fseek(file, newContact.firstNamePosn, SEEK_SET);
    fwrite(firstName, strlen(firstName) + 1, 1, file);

    fseek(file, newContact.lastNamePosn, SEEK_SET);
    fwrite(lastName, strlen(lastName) + 1, 1, file);

    fseek(file, newContact.emailPosn, SEEK_SET);
    fwrite(emailStr, strlen(emailStr) + 1, 1, file);

    fclose(file);
    free(firstName);
    free(lastName);
    free(emailStr);

}

