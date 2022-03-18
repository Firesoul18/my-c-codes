/*#include <stdio.h>

int main ()
{
    char name[5] = {"yogi"};
    for(int i = 0; i<5; i++)
    {
    printf ("%c",name[i]);
    }
    return 0;
}*/ //this is for a fix input.

//if we want to take input from the user than :-

#include <stdio.h>
void printstr(char str[])
{int i =0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
        
    }
}
int main ()
{
    char stri[34];
    gets(stri);
    printf("Using custom function printStr\n");
    printstr(stri);
    printf("\n");
    printf("using printf \n %s\n",stri);
    printf ("using puts : \n");
    puts(stri);
    
    return 0;
}
