#include<stdio.h>
#include<conio.h>


void fib(int a)
{

    if(a==0||a==1)
    {
        printf("1");
       
    }
    else
    {
        printf("%d ",a-1+a-2);
        fib(a-1);
    }
}
int main()
{
    //clrscr();
    int x;
    scanf("%d",&x);
    fib(x);
    getch();
    return 0;
}