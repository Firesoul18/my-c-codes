#include <stdio.h>
#include<stdlib.h>
int main ()
{
    int *a, *b;
    a=(int *)malloc(5*sizeof(int));
    b=(int *)malloc(5*sizeof(int));

    a[0]=1;
    a[1]=2;
    a[2]=5;
    a[3]=7;
    a[4]=9;
    b[0]=3;
    b[1]=4;
    b[2]=6;
    b[3]=7;
    b[4]=11; 

    return 0;
}

int fevicol(int *a, int *b)
{
    int *ptr;
    ptr=(int*)malloc(10*sizeof(int));
    for(int i =0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]<=b[i])
            {
                if(a[i]<b[j])
                {
                    ptr[i]=a[i];
                }
            }
            
            else
            {
                ptr[i]=b[i];
            }
        }
      //  printf("%d\n",ptr[i]);
           
    }
}