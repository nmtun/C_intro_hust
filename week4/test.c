#include <stdio.h>

int main () 
{
    char z[30] = {'\0'};
    printf ("enter a string ");
    //scanf ("%[aeiou]",z);   // scanf ("%[^aeiou]",z);
    scanf ("%[^\n]",z);
    printf ("The input was \"%s\"\n",z);
    return 0;
}
