#include <stdio.h>
int func (int  arr[])
{
for (int i = 0; i<4; i++)
{
    printf ("the value at adress %d is %d \n",i, arr[i]);
    arr[0]=12;
}
return;
}
int main ()
{
    int array[]={1,3,5,7};
    printf ("%d\n",array[0]);
    func(array);
    printf("%d",array[0]);

    
    return 0;
}