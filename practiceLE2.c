#include <stdio.h>
#include <string.h>

int practiceLE2 (char anArray []); //prototype

int main(){

	int result=0; //this is the return value of the function

	char anArray[10] = "te#rPz&"; //string we are checking
 
	result = practiceLE2(anArray); //function call
	printf("\n");
	printf("Function stopped at: %d", result); //where the function stopped


	return 0;
}




 int practiceLE2 (char anArray []){

	
	int i; //used for-for loop
	int stoppedAt = 0;


	//prints out original array
	for(i = 0; i<strlen(anArray); i++){

		printf("%c ", anArray[i]);


	}


	printf("\n");
	//prints out the array before encountering 'P'
	for(i = 0; i<strlen(anArray); i++){

		printf("%c ", anArray[i]);

		if(anArray[i] == 'P'){
			stoppedAt = i + 1;
			break; //stop printing and checking if 'P' is encountered
		}
	}


	return stoppedAt;
  

}


