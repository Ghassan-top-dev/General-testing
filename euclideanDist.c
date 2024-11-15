#include <stdio.h>
#include <math.h>


double eucDistN(int n);

int main(){

    int n = 0;

    printf("Enter the number of dimensions: ");
    scanf("%d", &n); 

    double finalOutput = eucDistN(n); 

    printf("Euclidean Distance: %0.2lf\n", finalOutput); 

    return 0; 
}



double eucDistN(int n){

    int arr[2][n]; 
    double finalSum = 0;

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the coordinates of vector%d: ", i+1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            finalSum += pow((arr[i][j] - arr[i+1][j]), 2);
        }
        
    }

    return sqrt(finalSum); 

}
