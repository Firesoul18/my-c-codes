#include <stdio.h>
#include <math.h>
float x1;
float x2;
float y1;
float y2;
float eucledian (x1, y1, x2, y2)
{
    return ( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
}
void greet(float (*ptr)(float, float, float, float))
{
    //printf("Greetings\n");
    printf("The Area is: %f\n",(22*ptr(x1, y1, x2, y2))/7);
}
//incomplet
int main(void) {
float (*fptr)(float, float, float, float);

printf("Enter x1\n");
scanf("%f",&x1);
printf("Enter x2\n");
scanf("%f",&x2);
printf("Enter y1\n");
scanf("%f",&y1);
printf("Enter y2\n");
scanf("%f",&y2);


fptr = eucledian;
greet(fptr);

	return 0;
}

