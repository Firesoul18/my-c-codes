#include <stdio.h>
#include <string.h>
struct d
{
    char Name[65765];
    char Route[65765];
    int dln;
    int kms;
};
int main()
{
    struct d d1, d2, d3;
    printf("Enter Your Name\n");
    gets(d1.Name);
    printf("Enter your Route\n");
    gets(d1.Route);
    printf("enter your driving license number\n");
    scanf("%d", &d1.dln);
    printf("enter your total kms.\n");
    scanf("%d", &d1.kms);
    printf("\n");
    printf("Enter Your Name\n");
    scanf ("%s",d2.Name);
    getchar();
    printf("Enter your Route\n");
    scanf("%s",&d2.Route);
    printf("enter your driving license number\n");
    scanf("%d", &d2.dln);
    printf("enter your total kms.\n");
    scanf("%d", &d2.kms);

    printf("Enter Your Name\n");
     scanf("%s",&d3.Name);
    printf("Enter your Route\n");
    scanf ("%s",d3.Route);
    printf("enter your driving license number\n");
    scanf("%d", &d3.dln);
    printf("enter your total kms.\n");
    scanf("%d", &d3.kms);

    printf("the data for first driver is :\n ");
    printf("Name : %s\n", d1.Name);
    printf("Route : %s\n", d1.Route);
    printf("Driving License Number : %d\n", d1.dln);
    printf("KiloMeters : %d\n", d1.kms);

    printf("the data for second driver is :\n ");
    printf("Name : %s\n", d2.Name);
    printf("Route : %s\n", d2.Route);
    printf("Driving License Number : %d\n", d2.dln);
    printf("KiloMeters : %d\n", d2.kms);

    printf("the data for third driver is :\n ");
    printf("Name : %s\n", d2.Name);
    printf("Route : %s\n", d2.Route);
    printf("Driving License Number : %d\n", d2.dln);
    printf("KiloMeters : %d\n", d2.kms);

    return 0;
}
//use scanf instead of gets.