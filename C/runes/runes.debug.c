#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    int base = 3;
    int desiredRuneNumber = 0;
    int num = 0;
    int count = 0;
    int sum = 0;
    int compare_sz;
    //Array of pointers. Used in conversion from sz to int
    char* runeTable[] = { "El", "Eld", "Tir", "Nef", "Eth", "Ith", "Tal",
        "Ral", "Ort", "Thul", "Amn","Sol","Shael","Dol","Hel","Io","Lum",
        "Ko","Fal","Lem","Pul","Um","Mal","Ist","Gul","Vex","Ohm","Lo","Sur",
        "Ber","Jah","Cham","Zod" };
    int runeCompute[sizeof(runeTable) / sizeof(runeTable[0])] = { 0 }; //Empty Integer array of length(runeTable)

    //printf("%d\n", runeCompute[4]);
    //printf("%d\n", sizeof(runeTable) / sizeof(runeTable[0]));
    //printf("%ls\n",runeTable);
    printf("%d\n", sizeof(runeCompute) / sizeof(runeCompute[0]));
    runeCompute[2] = 5;
    printf("%d\n", runeCompute[2]); //debug array appends
    printf("%d\n", runeCompute[5]);


    ////////////////////////////
    //  Computational Engine  //
    ////////////////////////////

    printf("Target Rune: ");

    char desiredRune_sz[6]; //Array of type char is our character string
    fgets(desiredRune_sz, 6, stdin); //Appends user input into above array

    for (int j = 0; j <= sizeof(runeTable) / sizeof(runeTable[0]) - 1; j = j + 1) // Converts string from stdin into an int corresponding to rune tier#.
    {
        compare_sz = strncmp(runeTable[j], desiredRune_sz, 3); // Compare elemetns 1-3 of char array. Will need to be fixed.
        if (compare_sz == 0) //if stdin matches an entry in runeTable
        {
            runeCompute[j] = 1; // jth Rune name in runeTable matches user input
        }
        else
        {
            runeCompute[j] = 0; // jth Rune name in runeTable does not match stdin
        }
        //printf("%d\n", count);
        printf("%s ", runeTable[j]);
        printf("%s", desiredRune_sz);
        printf("%d\n", compare_sz);
        printf("%d\n", runeCompute[j]);
    }

    return 0;
}