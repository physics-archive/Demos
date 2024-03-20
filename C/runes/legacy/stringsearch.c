#include <stdio.h>
#include <math.h>
#include <string.h>

int string_in(const char* string, const char** strings, size_t strings_num)
{
    for (size_t i = 0; i < strings_num; i++)
    {
        if (!strcmp(string, strings[i]))
        {
            return i;
        }
    }
    return -1;
}