#include <stdio.h>
#include <string.h>
void parser(char *str)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;}
            else if(str[i] == '>')
            {
                in = 0;
                continue;
            }
            if (in == 0)
            
               { str[index] = str[i];
                index++;
                }
        
    }
    str[index] = '\0';
    
}
int main()
{
    char string[57] = "<h1> Heading <\h1>";
    
    parser(string);
    puts(string);

    return 0;
}