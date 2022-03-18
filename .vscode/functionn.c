#include <stdio.h>
//Actually this is multiplication function
int function(int a, int b)
{
    if(a==0||b==0)
    {
        return (0);
    }
    return a+function(a,b-1);
}

int main ()
{
    int a[5]={1,2,3,4,5};
    printf("%d",function(67,21));
    arrayrev(a,0,5);
    return 0;
}
void arrayrev(int a[],int i, int n)
{
    if(i==n)
    return;
    // printf("\n%d",a[i]);
    arrayrev(a,i+1,n);
    printf("\n%d",a[i]);  //goes inside stack.
}