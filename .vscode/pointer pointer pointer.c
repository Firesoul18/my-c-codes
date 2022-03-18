#include<stdio.h>
#include<string.h>

int main()
{
    int a = 7;
    int*p = &a;
    printf("%s\n",&a);
    printf("%s\n",p);
   //printf("%d\n",*a);
    printf("%s\n",*p);
    printf("%s\n",&p);
    printf("%s\n",a);
    return 0;
}