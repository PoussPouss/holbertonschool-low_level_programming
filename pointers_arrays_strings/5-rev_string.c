#include "main.h"
/**
*rev_string -  prints a string in reverse
*@s : variable into prototype
*Return: void
*/
void rev_string(char *s)
{
int start = 0;
int end = 0;
char temp;

	while (s[end] != ('\0'))
	{
	end++;
	}

end--;


while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}

}
