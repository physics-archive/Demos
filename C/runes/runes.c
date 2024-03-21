#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    
    double x = 3;
    double p = 0;
    int compareString[33] = { };

    ///////////////////////////
    //      String Array     //
    ///////////////////////////

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
    while (compareString[k] != 0)
    {
        int product = pow(x, k + 1);
        printf("%d\n", product);
        k++;
    }
}

//Problem: Strncmp behaving poorly. In array[j][k], high k will cause change in j. Actually this isn't true...

    //printf("Strncmp Result between % s and %s is: %d", runeCompare, runeTable[1], strncmp(runeCompare, runeTable[1], 5));
    //printf("\n\nSizeof runeCompare(stdin): %d", sizeof(runeCompare));
    //printf("\nSizeof runeTable(Eld): %d\n", sizeof(runeTable[1]));
    //printf("%c versus %c\n", runeTable[1][2], runeCompare[2]);

    //string_in()
    //https://stackoverflow.com/questions/18806788/comparing-a-single-string-to-an-array-of-strings-in-c

        //printf("Strncmp for runeTable (%s) vs stdin (%s): %d\n",runeTable[j],runeCompare,compareString);
