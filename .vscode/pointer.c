#include<stdio.h>
//#include<string.h>

int main()
{
    int a = 7;
    int*p = &a;
    int *r = &p;
    int *s= &r;
    printf("%d\n",&r);
    printf("%d\n",&a);
    printf("%d\n",&p);
     printf("%d\n",&(*r));
     printf("%d\n",r);
    printf("%d\n",&p);
     printf("%d\n",*s);
     printf("%d\n",s);
    return 0;
}