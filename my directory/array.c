#include <stdio.h>
int main()
{
    int a[2][3]={{2,3,6},{3,8,3}};
    for (int i = 0; i < 2; i++)     
    {
        for (int j = 0; j<3; j++)
        { printf ("%d ", a[i][j]);
        }printf ("\n") ;
    }
    
    return 0;
}