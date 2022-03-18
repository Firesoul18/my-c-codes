#include <stdio.h>
int func(int t)
{
   static int x = 5;
   t = t+x;
   return t;
    
}
int main ()
{
   int a = 6;
   printf("%d\n",a);
   func(a);
   printf("%d\n",func(a)); 
   func(a);
   printf("%d",func(a));
    return 0;
}