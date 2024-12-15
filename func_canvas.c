#include <stdio.h>


void canvas(){



    printf("    X    Y    Z \n"); 
    printf("       |    |  \n");
    printf("1      |    |  \n");
    printf("   ----|----|----\n");
    printf("2      |    |  \n");
    printf("   ----|----|----\n");
    printf("3      |    |  \n");
    printf("       |    |  \n");


}

void can(){        
    int x1 = -1; 
    int x2 = -1; 
    int x3 = -1; 
    int x4; 
    int x5; 
    int x6; 
    int x7; 
    int x8; 
    int x9;
    int i; 
    char xPos;
    char choiceXO; 
    int yPos; 



    printf("\n\n\n");
    canvas();
    printf("\n\n\n");




    for (i = 0; i < 9; i++)
    {

        printf("Enter your choice, ex. xy3 (This will place an X in the Y-3 position): ");
        scanf(" %c %c %d", &choiceXO, &xPos, &yPos);

        /*---LINE 1 HOR---*/

        if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'X' || xPos == 'x' && yPos == 1)
        {

            x1 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'X' || xPos == 'x' && yPos == 1)
        {

            x1 = 2; 
        }
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'Y' || xPos == 'y' && yPos == 1)
        {

            x2 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'Y' || xPos == 'y' && yPos == 1)
        {

            x2 = 0; 
        }
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'Z' || xPos == 'z' && yPos == 1)
        {

            x3 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'Z' || xPos == 'z' && yPos == 1)
        {

            x3 = 0; 
        }

/*---LINE 2 HOR---*/
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'X' || xPos == 'x' && yPos == 2)
        {

            x4 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'X' || xPos == 'x' && yPos == 2)
        {

            x4 = 0; 
        }
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'Y' || xPos == 'y' && yPos == 2)
        {

            x5 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'Y' || xPos == 'y' && yPos == 2)
        {

            x5 = 0; 
        }
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'Z' || xPos == 'z' && yPos == 2)
        {

            x6 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'Z' || xPos == 'z' && yPos == 2)
        {

            x6 = 0; 
        }

/*---LINE 3 HOR---*/
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'X' || xPos == 'x' && yPos == 3)
        {

            x7 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'X' || xPos == 'x' && yPos == 3)
        {

            x7 = 0; 
        }
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'Y' || xPos == 'y' && yPos == 3)
        {

            x8 = 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'Y' || xPos == 'y' && yPos == 3)
        {

            x8 = 0; 
        }
        else if (choiceXO == 'X' || choiceXO == 'x' && xPos == 'Z' || xPos == 'z' && yPos == 3)
        {

            x9= 1; 
        }
        else if (choiceXO == 'O' || choiceXO == 'o' && xPos == 'Z' || xPos == 'z' && yPos == 3)
        {

            x9 = 0; 
        }


        
        
        

        printf("\n\n\n");
    

        printf("    X    Y    Z \n"); 
        printf("       |    |  \n");

        printf("x1: %d, x2: %d, x3: %d\n", x1, x2, x3);  // Debug output


     //   printf("1%s   | %s| %s\n", (x1 == 1 ? "  X" : (x1 == 2 ? "  O" : "   ")), (x2 == 1 ? "  X" : (x2 == 0 ? "  O" : "   ")), (x3 == 1 ? "  X" : (x3 == 0 ? "  O" : "   ")));

      //  printf("1%s, %s%s%s",(x1 == 1 ? "    X" : (x1 == 0 ?"    O": "     "))," |",(x2 == 1 ?"  X":(x2 == 0 ?"  O": "   "))," |",(x3 == 1 ?"  X":(x3 == 0 ?"  O": "     ")),"\n");
        
        
        /*
        
         printf("   ----|----|----\n");
        printf("2%s, %s, %s",(x4 == 1 ?"    X":(x4 == 0 ?"    O": "     "))," |",(x5 == 1 ?"  X":(x5 == 0 ?"  O": "   "))," |",(x6 == 1 ?"  X":(x6 == 0 ?"  O": "     ")),"\n");
        printf("   ----|----|----\n");
        printf("3%s, %s, %s",(x7 == 1 ?"    X":(x7 == 0 ?"    O": "     "))," |",(x8 == 1 ?"  X":(x8 == 0 ?"  O": "   "))," |",x9 == 1 ?"  X":((x9 == 0 ?"  O": "     ")),"\n");
        printf("       |    |  \n");

        
        */
       

        printf("\n\n\n");


/*
        X    Y    Z 
           |    |  
    1      |    |     
       ----|----|----
    2      |    |     
       ----|----|----
    3      |    |     
           |    |  
*/





    }
    

    


}


int main(){



    can();


    return 0; 
}








