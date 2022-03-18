#include <stdio.h>
#include<string.h>
int main ()
{//#define,undef,ifdef,ifndef, if, else, elif,pragma
    printf("ANSI %d\n",__STDC__);
    printf("Time Now is %s\n",__TIME__);
    printf("%s\n",__DATE__);
    printf("%s\n",__FILE__);
    
    return 0;
}