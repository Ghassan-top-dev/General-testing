#include <stdio.h>
#define MAX 10

typedef struct  {
    int x;
    int y;
} PointLab6;

// In lab6, you have to write definitions for the next 3 functions
// using the given description
PointLab6 createAPoint (int x, int y);
void printAPoint (PointLab6 point);
int addAPoint (PointLab6 point, PointLab6 arrayLab6 [MAX]);

// The definition of initializeArray is given below - you don't have to write it
void initializeArray (PointLab6 arrayLab6 [MAX]);

// The definition of deleteAPoint is given below on - you don't have to write it
void deleteAPoint (int whichOne, PointLab6 arrayLab6 [MAX]);

// not required for this lab - only used for visual effects - definition given on line
void printStars(void);
 
int main() {

   PointLab6 point1;
   int success;

   int intX;
   int intY;
  
   PointLab6 arrayLab6 [MAX];
   
   // initialize the array with empty points
   initializeArray (arrayLab6);
   
   //create 8 points and add to arrayLab6
   printf ("Enter 8 points: \n");
   
   for (int i = 1; i <= 8; i++) {
      
      printf ("Enter x and y coordinates of point #%d: ", i);
      scanf ("%d%d", &intX, &intY);
      point1 = createAPoint (intX, intY);
      success = addAPoint (point1, arrayLab6);
      if (success == -1) {
         printf ("Could not add the given point\n");
      }
   }
   point1 = createAPoint(5,7);
   success = addAPoint (point1, arrayLab6);


   deleteAPoint (4, arrayLab6);
   
   printf ("Printing all %d points in the array: \n\n", MAX);
   for (int i = 0; i < MAX; i++) {
      
      printStars();
      if (arrayLab6 [i].x == -1 && arrayLab6 [i].y == -1) {
         printf ("No point printing for point %d :) \n", i);
      }
      else {
         printf ("Printing for point %d \n", i + 1);
         printAPoint (arrayLab6 [i]);
      }
      printStars();
   }
  
  return 0;
}


PointLab6 createAPoint (int x, int y){


   PointLab6 point;

   point.x = x; 
   point.y = y; 

   return point; 

}


void printAPoint (PointLab6 point){

   printf("X coordinate = %d", point.x);
   printf("\nY coordinate = %d\n", point.y); 

}


int addAPoint (PointLab6 point, PointLab6 arrayLab6 [MAX]){


   for (int i = 0; i < MAX; i++)
   {

      if (arrayLab6[i].x == -1 && arrayLab6[i].y == -1)
      {
         arrayLab6[i].x = point.x;
         arrayLab6[i].y = point.y;

         return 1; 

      }
      
      
      


   }

   return -1; 
   
   

   
   
   // if (point.x != -1)
   // {

   //    PointLab6 arrayLab6[point.x]; 


   //    return 1;

   // }

   // if (point.y != -1)
   // {

   //    PointLab6 arrayLab6[point.y]; 

   //    return 1;
   // }

   return -1; 
   
   



}






/*
 This function initializes all array elements as empty points
 */
void initializeArray (PointLab6 arrayLab6 [MAX]) {
   // initialize the array with empty points
   for (int i = 0; i < MAX; i++) {
      arrayLab6 [i].x = -1;
      arrayLab6 [i].y = -1;
   }
}


/*
 This function makes a point empty by assigning -1 to both its coordinates
 */
void deleteAPoint (int whichOne, PointLab6 arrayLab6 [MAX]) {
   
   arrayLab6[whichOne].x = -1;
   arrayLab6[whichOne].y = -1;
}

// prints a line of 25 stars
void printStars (void) {
   
   for (int i = 1; i <= 25; i++) {
      printf ("*");
   }
   printf ("\n");
}

