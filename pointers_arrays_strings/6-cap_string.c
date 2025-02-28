#include "main.h"

char *cap_string(char *str)
{
    int i = 0;
    char separators[] = " \t\n,;.!?\"(){}";
    int is_start_of_word = 1;

    while (str[i] != '\0')
    {
        int j = 0;
        int is_separator = 0;

        while (separators[j] != '\0')
        {
            if (str[i] == separators[j])
            {
                is_separator = 1;
                break;
            }
            j++;
        }

        if (is_start_of_word && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 'a' - 'A';
        }

        if (is_separator)
        {
            is_start_of_word = 1;
        }
        else
        {
            is_start_of_word = 0;
        }

        i++;
    }
    return str;
}
