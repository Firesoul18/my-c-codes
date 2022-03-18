#include<stdio.h>
int star (int y)
{for (int i =0; i<y; i++)
{
    for (int j = 0; j<=i; j++)
    {printf ("*");}
    printf("\n");
    }
}
int close (int z)
{for (int i =0; i<z; i++)
{
    for (int j = 0; j<z-i; j++)
    {printf ("*");}
    printf("\n");
    }
}
int main ()
{int x,n,i = 0;
printf ("enter 1 for upper triangle and 2 for lower triangle.\n");
scanf("%d",&x);
printf("enter the number of rows\n");
scanf("%d",&n);
switch(x){
case 1:{ printf ("%c",star(n)); break;}
case 2 : { printf ("%c",close (n)); break;}
}
    return 0;
}



