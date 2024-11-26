#include <stdio.h>

int main(){
        
        const float pi = 3.14159265; 
        float r; 
        float aoc, coc;
        printf("Enter a radius for a circle: ");

        scanf("%f", &r);
        aoc = pi * (r * r);
        coc = 2 * pi * r;

        printf("The area of the cicle is: %f\n and the circumference is: %f\n", aoc, coc);


        return 0;

}


