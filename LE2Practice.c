#include <stdio.h>



int stopAt(int toProcess[10]);


int main(){
	
	int i, numberOfNegativeNums;
	int toProcess[10];	
	for(i = 0; i < 10; i++){

		printf("Enter integer: ");
		scanf("%d", &toProcess[i]);
	}
	
	numberOfNegativeNums = stopAt(toProcess);
	printf("\nThe number of negative numbers in the array is: %d", numberOfNegativeNums);
	return 0;

}


int stopAt(int toProcess[10]){

	int i;
	int counter = 0;

	for(i = 0; i<10;i++){

		printf("%d ", toProcess[i]);
	}

	printf("\n");

	for(i = 0; i < 10; i++){

		if(toProcess[i] < 0){
			break;
		}
	
		printf("%d ", toProcess[i]); 

	}

	for(i = 0; i < 10; i++){
		if(toProcess[i] < 0){
			counter++;
		}

	}


	return counter; 

}



