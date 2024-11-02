#include <stdio.h>    // Includes the standard input-output library for functions like printf
#include <string.h>   // Includes the string library for functions like strtok

int main() {
    // Declare and initialize an IP address as a string
    char ip[] = "200.200.200.200";  // This is the IP address we want to process

    // Declare character arrays to store different parts of the IP address as needed
    char ipStr[16] = "";   // Array to store the final concatenated IP address if needed (not used in this code)

    // Use strtok to split the IP address by the period (.) character
    char *token = strtok(ip, ".");  // strtok modifies the original string, replacing each '.' with '\0'
                                     // and returns a pointer to the first token (i.e., "129")
                                     
    // Loop through all tokens (segments of the IP address) until there are none left
    while (token != NULL) {   // strtok returns NULL when there are no more tokens
    
        strcat(ipStr,token);

        // Move to the next token (i.e., the next segment of the IP address)
        token = strtok(NULL, ".");  // strtok continues from where it left off, returning the next token

    }
    
    // Print the content of newIp1, which holds the last segment processed in the loop
    printf("newIp1: %s\n", ipStr);  // This prints the last value of newIp1 after the loop completes

    return 0;  // End of the main function, returns 0 to indicate successful execution
}
