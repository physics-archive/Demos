#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    ///////////////////////////
    //  Initialize Variables //
    ///////////////////////////
    
    int exponentBase = 3;
    int exponentPow = 0;
    int k[33] = { };
    int m[33] = { };

    ///////////////////////////
    //      String Array     //
    ///////////////////////////

    char runeTable[][7] = {"El","Eld", "Tir", "Nef", "Eth", "Ith", "Tal",
    "Ral", "Ort", "Thul", "Amn","Sol","Shael","Dol","Hel","Io","Lum",
    "Ko","Fal","Lem","Pul","Um","Mal","Ist","Gul","Vex","Ohm","Lo","Sur",
    "Ber","Jah","Cham","Zod"};

    printf("\n%s and sizeof is: %d\n", runeTable[4], sizeof(runeTable[4]));

    char runeCompare[7] = { };
    printf("Enter your desired rune: ");
    fgets(runeCompare, 7, stdin);

    for (int j = 0; j <= sizeof(runeTable) / sizeof(runeTable[0]) - 1; j++)
    {
        k[j] = strlen(runeTable[j]);
        printf("Index #%d: %d\n", j, k[j]);
        //int g = k[j];
        //printf("g is eq to: %d\n", g);
        
        ///////////////////////////
        //      STRING LEN 2     //
        ///////////////////////////
        if (k[j] == 2)  
        {
            m[j] = strncmp(runeTable[j], runeCompare, 2);
            printf("len2 compare: %d\n", m[j]);
        }

        ///////////////////////////
        //      STRING LEN 3     //
        ///////////////////////////
        else if (k[j] == 3) 
        {
            m[j] = strncmp(runeTable[j], runeCompare, 3);
            printf("len3 compare: %d\n", m[j]);
        }
    
        ///////////////////////////
        //      STRING LEN 4     //
        ///////////////////////////
        else if (k[j] == 4)
        {
            m[j] = strncmp(runeTable[j], runeCompare, 4);
            printf("len4 compare: %d\n", m[j]);
        }
    
        ///////////////////////////
        //      STRING LEN 5     //
        ///////////////////////////
        else if (k[j] == 5)
        {
            m[j] = strncmp(runeTable[j], runeCompare, 5);
            printf("len5 compare: %d\n", m[j]);
        }
        
        else {
            printf("sadge\n");
        }


    
    }
    
    //printf("%d", strlen(runeCompare));
    //printf("%c", runeCompare[3]);

    for (int n = 0; n <= sizeof(m) / sizeof(m[0]) - 1; n++)
    {
        //printf("%d", m[n]);
    }

}


//Problem: Strncmp behaving poorly. In array[j][k], high k will cause change in j. Actually this isn't true...