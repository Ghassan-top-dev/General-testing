#include <stdio.h>


int practiceLE2 (int anArray [10]);


int main(){


    int anArray[10] = {6, 9, 2, 1, 3, 13, 5, 1, 4, 10};

    int numValues = 0; 


    numValues = practiceLE2(anArray); 

    printf("\nThere are %d values greater than %d\n", numValues, anArray[0]); 



    return 0;
}

int practiceLE2 (int anArray [10]){


    int i;
    int numValuesGreaterThanFirst = 0; 

    for (i = 0; i < 10; i++)
    {
        printf("%d ", anArray[i]);
    }
        printf("\n");
    for (i = 0; i < 10; i++)
    {
        if (anArray[i] > anArray[0])
        {
            printf("%d ", anArray[i]);
            numValuesGreaterThanFirst++;
        }
        
    }
    
    return numValuesGreaterThanFirst;


}
