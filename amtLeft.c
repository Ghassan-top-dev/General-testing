#include <stdio.h>


int main(){

	
	int amount, bill100, bill50, bill20, bill10, bill5, remaining; 
	printf("Enter integer $ amount: $ ");
	scanf("%d", &amount);
 
	bill100 = amount / 100; 
	amount = amount % 100; 

	bill50 = amount / 50;
	amount = amount % 50;

	bill20 = amount / 20;
	amount = amount % 20; 

	bill10 = amount / 10;
	amount = amount % 10;

	bill5 = amount / 5;
	amount = amount % 5; 

	remaining = amount;

	printf("$100 bill: %d\n", bill100);
    printf("$50 bill: %d\n", bill50);
    printf("$20 bill: %d\n", bill20);
    printf("$10 bill: %d\n", bill10);
    printf("$5 bill: %d\n", bill5);
	printf("Remaining amount: $%d", remaining); 

	return 0;



}
