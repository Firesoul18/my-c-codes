#include <stdio.h>
#include <string.h>
int main ()
{
    //read from notebook.
    char string1[43], string2[43];
    gets(string1);
    gets(string2);
    printf("\n");
    puts(string1);printf ("is brother of %s",string2);
    puts(string2);
    return 0;
}