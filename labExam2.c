// Name: Ghassan Murad Agha

// email: gmuradag@uoguelph.ca


#include <stdio.h>


int processArray(int toProcess[10]); //prototype


int main(){   //main



	int toProcess[10]; //this array will store the elements the user inputs
	int i; //used for for loops
	int stoppedAt; //used for function call and where the array stopped printing

	for(i = 0; i < 10; i++){ //for loop to get the user input

		printf("Enter an integer: ");
		scanf("%d", &toProcess[i]);

	}


	stoppedAt = processArray(toProcess); //function call
	printf("\nThe array stopped at index: %d\n", stoppedAt); //which index did the array stop printing at in the function?


	printf("The remaining elements in the array: ");

	for(i = stoppedAt; i < 10; i++){  //this prints the remaining elements that weren't printed by the function
		printf("%d ", toProcess[i]);
	}

	printf("\n"); //used for formmating

	return 0;
}



int processArray(int toProcess[10]){ //function header and body underneath



	int i; //used for for loops
	int stoppedAt; //which index did the function stop printing at?



	for(i = 0; i < 10; i++){ //for loop that prints the whole array

		printf("%d ", toProcess[i]);


	}

	printf("\n");


	for(i = 0; i < 10; i++){ //print until a multiple of 11 is encountered and record its position using 'stoppedAt = i;'


		if(toProcess[i] % 11 == 0){
			stoppedAt = i;
			break;

		}

		printf("%d ", toProcess[i]);

	}



	return stoppedAt; //return which index the function stopped printing the array



}


