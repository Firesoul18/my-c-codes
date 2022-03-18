#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *b;
    *b = *a-t;
    *a = *a+t;


}
int main ()
{
   int a = 34; int b = 39;
   printf("%d %d\n",a,b);
   swap(&a, &b) ;
   printf ("%d %d",a,b);
    return 0;
}