#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;

    printf("Enter Number 1:");
    scanf("%u",&a);

    printf("Enter Number 2:");
    scanf("%u",&b);

    printf("Enter Number 3:");
    scanf("%u",&c);
      avg=(float)((a+b+c)/3);
    printf("Average of %u,%u and %u is %.2f", a,b,c,avg);
    return 0;
}