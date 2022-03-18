#include <stdio.h>
int n;
void arrayrev(int a[])
{
    for(int i=1; i<n+1; i++)
    {
        printf("%d\n",a[n-i]);
    }
}

int main ()
{
    int n=5;
    int array[5]={1,2,3,4,5};
    arrayrev(array);
    return 0;
}
