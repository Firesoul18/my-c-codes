 #include <stdio.h>
 #include <stdlib.h>
int average (int a, int b)
{
    return (a+b)/2;
} 
void Greet (*ptr)(int, int)
{
    printf("Greetings\n");
    printf ("Average of the numbers is %d\n",average(int, int));
}
int main ()
{
    int x,y;
 printf("Give two numbers to find the average\n");
 scanf("%d",&x);
 scanf("%d",&y);
 int *ptr;
 ptr = average;
 Greet(x, y);

    return 0;
}