#include "main.h"

/**
*rev_string - rev a string
*@s: input string
*Return: String in rev
*/
void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int i;
while (s[counter] != '\n')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}
