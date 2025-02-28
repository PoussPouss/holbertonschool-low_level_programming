#include "main.h"

char *leet(char *str)
{
    int i = 0;
    int j;
    char leet_chars[] = "aAeEoOtTlL";
    char leet_replacement[] = "4433007711";

    while (str[i] != '\0')
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == leet_chars[j])
            {
                str[i] = leet_replacement[j];
                break;
            }
        }
        i++;
    }
    return (str);
}
