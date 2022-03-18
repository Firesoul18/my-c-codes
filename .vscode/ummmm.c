#include<stdio.h>
#include<limits.h>
int main ()
{
    //extern int a;
    //printf("%d",a);
//     #define student(int x) {printf("Name : %s",Student#x);}
//    char Student1[13] = "Yogesh";
//    student(1);
int var1=INT_MAX;
printf("%u",var1);
var1=INT_MIN;
printf("\n%u",var1);
var1=UINT_MAX;
printf("\n%u",var1);
var1=SHRT_MAX;
printf("\n%u\n",var1);
var1=SHRT_MIN;
printf("%u",var1);
    return 0;
}