#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
    int h,m,s;
    printf("Enter Hours : ");
    scanf("%d",&h);
    getchar();
    printf("Enter Minutes : ");
    scanf("%d",&m);
    getchar();
    printf("Enter Seconds : ");
    scanf("%d",&s);
    getchar();

    system("cls");
    while(1)
    {
        
         s = s+1;
        
        if(s==60)
        {
            s=0;
            m=m+1;
        }
        if(m==60)
        {
            m=0;
            h=h+1;
        }
        if(h==24)
        {
            h=0;
        }
        printf("%02d:%02d:%02d",h,m,s);
        _sleep(1000);
        system("cls");

    }

return 0;
}