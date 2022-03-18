#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
    //study about it.
//char string[] = "Harry";
int *ptr;
 ptr = (int*) calloc (1,sizeof(int));
 printf("%d\n",sizeof(int));
 for(int i=0; i<5; i++)
 {
     scanf("%d",&ptr[i]);

 }
  for(int i=0; i<6; i++)
 {
     printf ("the value at %d is %d\n",i,ptr[i]);

 }

    return 0;
} 