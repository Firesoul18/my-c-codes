//incomplete.....


#include <stdio.h>
void arrayrev(int *(arr[2][2]))
  
{ 
    
}
int main ()
{
   int a[][2] = {{2,3},{4,1}};
    for (int i = 0; i < 2; i++)     
    {
        for (int j = 0; j<2; j++)
        { printf ("%d ", a[i][j]);
        }printf ("\n") ;
    }
   arrayrev(a);
    for (int i = 0; i < 2; i++)     
    {
        for (int j = 0; j<2; j++)
        { printf ("%d ", a[i][j]);
        }printf ("\n") ;
    }
   
    return 0;
}