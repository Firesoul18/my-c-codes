#include <stdio.h>

typedef struct student 
{
    int id;
   int marks;
}s;

int main ()
{
    s r;
    r.id = 654;
    r.marks = 699;

    printf ("Marks for %d is %d",r.id,r.marks);

    return 0;
}