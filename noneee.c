#include<stdio.h>
#define school(x) (printf("%s",student##x))
int main()
{
   char student1[44] = "Yogesh";
   school(1);
   return 0;
}
