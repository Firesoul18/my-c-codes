#include<stdio.h>

int fab (int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (x==0)
    { return 0;}
    else {
        return x-1+fab(x-1);
    }
    
}
int main()
{int n;
 printf ("enter a number : \n");
 scanf ("%d",&n);
 printf ("fab for your number is : %d",fab(n));
 return 0;
}


