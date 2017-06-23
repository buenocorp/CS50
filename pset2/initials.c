#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    string s = get_string();
    
    char* pch;
    pch = strtok (s, " ");
    while (pch != NULL)
    {
        char c = toupper(* pch);
        printf ("%c", c);
        pch = strtok (NULL, " ");
    }
    printf ("\n");
    return 0;
}
