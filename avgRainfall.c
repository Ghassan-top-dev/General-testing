#include <stdio.h>




int main(){


    double rainfall[5][12] = {
        //jan
        {9.42, 5.84, 5.66, 8.55, 5.8, 4.45, 4.73, 0.61, 8.5, 1.21, 7.59, 8.81}, //2019
        {1.97, 4.97, 6.97, 6.66, 7.07, 9.19, 6.72, 8.89, 9.54, 3.87, 8.58, 5.37}, //2020
        {8.88, 4.15, 7.12, 9.3, 7.94, 5.2, 6.97, 1.29, 2.78, 5.3, 1.17, 2.12}, //2021
        {0.58, 5.95, 6.2, 9.03, 3.9, 6.7, 4.75, 4.47, 1.4, 0.29, 3.65, 0.04}, //2022
        {4.40, 9.12, 9.09, 5.89, 1.55, 9.45, 3.66, 4.8, 2.43, 1.97, 6.74, 7.28} //2023
    };

    char months[][10] = {"January", "February", "March", 
                            "April", "May", "June", 
                            "July", "August", "September",
                            "October", "November", "December"};


    float yearlyAvg = 0; 
    float monthlyAvg = 0; 
    int currentYear = 2019; 



    //yearly average
    printf("Report 1: Yearly average");
    printf("\nYear Rainfall");

    for (int totalYears = 0; totalYears < 5; totalYears++)
    {
        for (int months = 0; months < 12; months++)
        {
            yearlyAvg += rainfall[totalYears][months]; 
        }

        yearlyAvg /= 12; 
        printf("\n%d %.2f", currentYear+totalYears, yearlyAvg);
        yearlyAvg = 0; 
    }

    printf("\n\n"); 




    //yearly average
    printf("Report 2: Monthly average");
    printf("\nMonth Average Rainfall");

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            monthlyAvg += rainfall[j][i]; 


        }

        monthlyAvg /= 5; 
        printf("\n%-10s %.2f", months[i], monthlyAvg);
        monthlyAvg = 0; 


        
    }


    return 0; 
}
