#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    
    int exponentBase = 3;
    int exponentPow = 0;

    ///////////////////////////
    //      String Array     //
    ///////////////////////////

    char *runeTable[] = { "El","Eld", "Tir", "Nef", "Eth", "Ith", "Tal",
    "Ral", "Ort", "Thul", "Amn","Sol","Shael","Dol","Hel","Io","Lum",
    "Ko","Fal","Lem","Pul","Um","Mal","Ist","Gul","Vex","Ohm","Lo","Sur",
    "Ber","Jah","Cham","Zod",NULL};

    printf("\n%s and sizeof is: %d\n", runeTable[4], sizeof(runeTable[4]));

    char runeCompare[7] = { };
    printf("%s", "Enter your desired rune: ");
    fgets(runeCompare, 7, stdin);
    runeCompare[7] = "NULL"
    //char drune[7] = { };
    //strcpy(drune, runeCompare);

    printf("Strncmp Result between % s and %s is: %d", runeCompare, runeTable[1], strncmp(runeCompare, runeTable[1], 5));
    printf("\n\nSizeof runeCompare(stdin): %d", sizeof(runeCompare));
    printf("\nSizeof runeTable(Eld): %d\n", sizeof(runeTable[1]));

    printf("%c versus %c\n", runeTable[2], runeCompare[2]);
    printf("\n%s", drune);

    //string_in()
    //https://stackoverflow.com/questions/18806788/comparing-a-single-string-to-an-array-of-strings-in-c
}

//Problem: Strncmp behaving poorly. In array[j][k], high k will cause change in j. Actually this isn't true...