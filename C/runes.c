#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    int base = 3;
    int p;
    int desiredRuneNumber = 0;
    int num = 0;
    int count = 0;
    int sum = 0;
    int compare_sz;
    char runeTableChar[6];

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
    printf("%d\n", sizeof(stdin) / sizeof(stdin[0])); //debug to see if stdin is array
    printf("char 1: %c\n", desiredRune_sz[0]);
    printf("char 3: %c\n", desiredRune_sz[2]);
    printf("string 5 in pointer array: %s\n", runeTable[5]);
    printf("char decon: %c\n", runeTable[5][0]); //works
    //char rune_word[6];
    //fgets(rune_word, 6, runeTable[0]);

    //printf("rune_word: %c\n", rune_word[0]);

    
    for (int j = 0; j <= sizeof(runeTable) / sizeof(runeTable[0]) - 1; j = j + 1) // Converts string from stdin into an int corresponding to rune tier#.
    {
        compare_sz = strncmp(runeTable[j], desiredRune_sz, 2); // Compare elemetns 1-2 of char array. Will need to be fixed.
        if (compare_sz == 0) //if stdin matches an entry in runeTable
        {
            runeCompute[j]=1; // jth Rune name in runeTable matches user input
        }
        else
        {
            runeCompute[j]=0; // jth Rune name in runeTable does not match stdin
        }
        //printf("%d\n", count);
        printf("%s ", runeTable[j]);
        printf("%s\n", desiredRune_sz);
        printf("string comparison: %d\n", compare_sz);
        printf("bit %d\n", runeCompute[j]);
        //printf("compare mem: %s\n",)
    }

    for (int k = 0; runeCompute[k] <= 1; k = k + 1) { // Convert each 0  
        p = runeCompute[k] + 4;
        printf("Integer: %d\n", p);
        
        //printf("hello world");
    }

    return 0;
}