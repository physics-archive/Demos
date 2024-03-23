﻿#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    char version[100] = "Alpha Ver. 03.22.24-02";

    double x = 3;
    double p = 0;
    int compareString[33] = { };

    ///////////////////////////
    //      String Array     //
    ///////////////////////////
    printf("Diablo II Rune Calculator\n%s\n\n",version);

    char runeTable[34][6] = {"El","Eld", "Tir", "Nef", "Eth", "Ith", "Tal",
    "Ral", "Ort", "Thul", "Amn","Sol","Shael","Dol","Hel","Io","Lum",
    "Ko","Fal","Lem","Pul","Um","Mal","Ist","Gul","Vex","Ohm","Lo","Sur",
    "Ber","Jah","Cham","Zod",NULL};

    char runeCompare[8] = { }; // Limits to 7 byte string of characters
    printf("%s", "Desired rune: "); 
    fgets(runeCompare, 8, stdin); // Gets user input for a fixed-size string
    runeCompare[strlen(runeCompare) - 1] = 0; // Trims 'Enter' artefact from runeCompare. Result of fgets.

    ///////////////////////////
    //     String Compare    //
    ///////////////////////////
    
    //Creates a 1x33 array of values equal to -1,0,1; there exists one arr[j]=0 and corresponds to  the user's input
    for (int j = 0; j <= sizeof(runeTable) / sizeof(runeTable[0]) - 1; j = j + 1)
    {
        compareString[j] = strncmp(runeTable[j], runeCompare, 6);
    }
    
    ////////////////////////////
    //  Computational Engine  //
    ////////////////////////////
    
    //Operate conditionally on compareString until an element equal to zero is reached
    int k = 0;
    double product = 0;
    while (compareString[k] != 0 && compareString >= 33)
    {
        if (k <= 21) { 
            product = pow(x, k + 1); //Iterative exponentiation in base-3. Runes (k) 1 to 22.
        }
        else {
            product = pow(2, k + 1); //Iterative exponentiation in base-2. Runes (k) 22 to 33.
        }
        printf("%s: %.0lf\n", runeTable[k], product);
        k++;
    }
    free(runeTable);
    free(compareString);
    getch();
}