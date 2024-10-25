#include <stdio.h>


int practiceLE2 (int anArray [10]); //prototype


int main(){


    int anArray[10] = {6, 9, 2, 1, 3, 13, 5, 1, 4, 10}; //given array

    int numValues = 0;  //used with function call


    numValues = practiceLE2(anArray);  //function call

    printf("\nThere are %d values greater than %d\n", numValues, anArray[0]);  //prints the amount of
    //values greater than the first element as well as the first element



    return 0;
}

int practiceLE2 (int anArray [10]){


    int i; //for for loop
    int numValuesGreaterThanFirst = 0; //this counts how many elements are greater than the first element

    for (i = 0; i < 10; i++)
    {
        printf("%d ", anArray[i]);
    } //prints array
        printf("\n");
    for (i = 0; i < 10; i++)
    {
        if (anArray[i] > anArray[0])
        {
            printf("%d ", anArray[i]);
            numValuesGreaterThanFirst++;
        }
        
    }//prints the array with elements greater than the first elements
    
    return numValuesGreaterThanFirst; //this is the number of elements greater than the first element


}
