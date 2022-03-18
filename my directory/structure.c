#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[30];
    float marks;
};
//if we write the local variable here, trhen it will be global.
int main()
{
    struct student harry, rabi, shubham; //it's a local variable if it is in main.
    harry.id = 1201;
    rabi.id = 1202;
    shubham.id = 1203;
    harry.marks = 50;
    rabi.marks = 45;
    shubham.marks = 59;
    strcpy(harry.name, "Harry");
    strcpy(rabi.name, "Rabish_Kumar");
    strcpy(shubham.name, "Shubham");

    printf("%d student's name is %s.\nMarks = %f", harry.id, harry.name, harry.marks);
    return 0;
}