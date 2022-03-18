#include<stdio.h>
#include<stdlib.h>
int a;
int avg(int array[a])
{
    float sum=0.0;
    for(int i =0; i<a; i++)
    {
        sum=sum+array[i];
    }
    printf("The Average is: %.02f",sum/a);
    _beep(800,900);
    return 0;
}

int main()
{
    system("cls");5
    printf("For How Many Numbers You Want Average: ");
    scanf("%d",&a);
    int array[a];
    for(int i=1; i<a+1; i++)
    {
        printf("Enter Number %d: ",i);
        scanf("%d",&array[i-1]);
    }
    avg(array);
    return 0;
    
}