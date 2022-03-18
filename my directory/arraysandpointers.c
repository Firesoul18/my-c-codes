#include<stdio.h>
int main()
{
    int arr[4]={1,2,3,4};
    int *ptr[] = arr;
    printf("%d\n",&arr);
    printf("%d\n",*ptr[3]);
    printf("%d\n",*(&arr[3]));
    printf("%d\n",arr + 2);
    printf("%d\n",&arr[3]);
    //if we write arr++ or arr --, it will throw an error.
    //run the code again and again and you'll find that it's in a dynamic memory.


}