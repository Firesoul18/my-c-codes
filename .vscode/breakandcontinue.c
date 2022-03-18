#include <stdio.h>
#include<stdlib.h>

int main ()
{
    int i =0;
    for(i; i<10; i++)
    {
        if(i==7)
        {
           // exit(0);
           //return(0);
           continue;
           //break;
        }
        printf("%d\n",i);
    }
    return 0;
}