#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    
    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    
    char version[100] = "Alpha Ver. 03.22.24-03"; 
    double p = 0; //2^p or 3^p 
    int compareString[9] = { };
    
    ///////////////////////////
    //      String Array     //
    ///////////////////////////
    
    printf("Diablo II Rune Calculator\n%s\n\n", version);

    char runeCompare[9] = { }; //Debug why >8 is required. Outputs entire table.
    char runeTable[34][6] = {"El","Eld", "Tir", "Nef", "Eth", "Ith", "Tal",
    "Ral", "Ort", "Thul", "Amn","Sol","Shael","Dol","Hel","Io","Lum",
    "Ko","Fal","Lem","Pul","Um","Mal","Ist","Gul","Vex","Ohm","Lo","Sur",
    "Ber","Jah","Cham","Zod"}; //6x34 array of characters. Static.
    
    getUserInput:
    printf("%s", "Desired rune: "); 
    fgets(runeCompare, 9, stdin); // Gets user input for a fixed-size string
    if (runeCompare[9] != '\n') { printf("broken"); goto getUserInput; }
    runeCompare[strlen(runeCompare) - 1] = 0; // Trims 'Enter' artefact from runeCompare. Result of fgets.
    
    ///////////////////////////
    //     String Compare    //
    ///////////////////////////
    //Creates a 1x33 array of values equal to -1,0,1; there exists one arr[j]=0 and corresponds to  the user's input
    int count = 0;
    for (int j = 0; j <= sizeof(runeTable) / sizeof(runeTable[0]) - 1; j = j + 1)
    {
        compareString[j] = strncmp(runeTable[j], runeCompare, 6);
    }
    
    ////////////////////////////
    //  CONDITION: TERMINATE  //
    ////////////////////////////
    

    ////////////////////////////
    //  Computational Engine  //
    ////////////////////////////    
    
    int k = 0;
    double product = 0;
    double product_sifted = 0;
    double productArray[33] = { };

    //Operate conditionally on compareString until an element equal to zero is reached
    while (compareString[k] != 0 && k < 33)
    {
        if (k <= 21) 
        { 
            product = pow(3, k + 1); //Iterative exponentiation in base-3. Runes (k) 1 to 22.
            productArray[k] = product;
        }
        else 
        {
            product = pow(2, k + 1); //Iterative exponentiation in base-2. Runes (k) 22 to 33.
            productArray[k] = product;
        }
        //idea: create a table "product[k]" and iterate backwards using k-- 
        //idea: place fgets in a while loop and exit if proper rune name is obtained. Cleaner.
        printf("%s: %.0lf\n", runeTable[k], productArray[k]);
        k++;
    }
    getch();
}