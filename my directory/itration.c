#include <stdio.h>
int main ()
{
    int z, x, y;
    printf ("enter the index : \n");
    scanf("%d",&x);
    x = x-1;
    for (int i = 0; x - i > 0; i++)
    { 
        y = x-i;
        z = z + y ;
        

    }
    printf ("%d\n",z);
    return 0;
}
//fibonacci series