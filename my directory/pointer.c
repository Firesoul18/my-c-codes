#include <stdio.h>
int main ()
{
    int a = 76;
    int *y = &a;
    printf("address of pointer y to a is %p\n",&y);
    printf("the value of a is %d\n",*y);
    printf("%x",y);
    return 0;
}