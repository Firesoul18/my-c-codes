#include <stdio.h>

union as
{
    int id;
    int marks;
};

int main()
{
    union as s1, s2;
    s1.id = 4;
    s2.id = 6;
    s1.marks = 5;
    s2.marks = 65;
    printf("The %d id\n",s1.id);
    printf("%d\n",s2.id);
    printf("%d\n",s1.marks);
   printf("The %d marks",s2.marks);
    return 0;
}//only takes the last 1.