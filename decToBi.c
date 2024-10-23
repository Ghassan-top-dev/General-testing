#include <stdio.h>




int convertDecimalToBinary(int userInpt);


int main(){

	int funcCaller;
	int decimalVal;
	printf("Enter a decimal: ");
	scanf("%d", &decimalVal);

	funcCaller  = convertDecimalToBinary(decimalVal);

	printf("\nThe total number of digits: %d", funcCaller);
	


	return 0;

}

int convertDecimalToBinary(int userInpt){
	
	int arr[100];
	int runner = 1;
	int totalDigits;
	int div;
	div = userInpt;
	int counter = 0;
	int i;


	do{
		
		arr[counter] = div % 2;
		div = div / 2;
		counter++;
		
		if(div == 0){
			runner = 0;
		}

	}while(runner == 1);

	
	
	for(i = counter -1; i>=0;i--){


		printf("%d", arr[i]);
	}



	return counter; 

}
