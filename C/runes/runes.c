#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    char version[100] = "Alpha Ver. 0.1 - 03.22.24-01";

    double x = 3;
    double p = 0;
    int compareString[33] = { };

    ///////////////////////////
    //      String Array     //
    ///////////////////////////
    printf("Diablo II Rune Calculator\n%s\n\n",version);

    char runeTable[33][6] = {"El","Eld", "Tir", "Nef", "Eth", "Ith", "Tal",
    "Ral", "Ort", "Thul", "Amn","Sol","Shael","Dol","Hel","Io","Lum",
    "Ko","Fal","Lem","Pul","Um","Mal","Ist","Gul","Vex","Ohm","Lo","Sur",
    "Ber","Jah","Cham","Zod"};

    char runeCompare[8] = { }; // Limits to 7 byte string of characters
    printf("%s", "Desired rune: "); 
    fgets(runeCompare, 8, stdin); // Gets user input for a fixed-size string
    runeCompare[strlen(runeCompare) - 1] = 0; // Trims 'Enter' artefact from runeCompare. Result of fgets.

    ///////////////////////////
    //     String Compare    //
    ///////////////////////////

    for (int j = 0; j <= sizeof(runeTable) / sizeof(runeTable[0]) - 1; j = j + 1)
    {
        compareString[j] = strncmp(runeTable[j], runeCompare, 6);
    }
    
    ////////////////////////////
    //  Computational Engine  //
    ////////////////////////////
    
    //Operate on compareString until an element equal to zero is reached
    int k = 0;
    double product = 0;
    while (compareString[k] != 0)
    {
        if (k <= 21) {
            product = pow(x, k + 1);
        }
        else {
            product = pow(2, k + 1);
        }
        printf("%s: %.0lf\n", runeTable[k], product);
        k++;
    }
    getch();
}