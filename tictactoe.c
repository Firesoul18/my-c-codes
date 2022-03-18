#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

char array[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void check(char x)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == x)
            {
                array[i][j] = 'X';
            }
        }
    }
    printf(" __ __ __\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("|%c ", array[i][j]);
        }
        printf("|\n");
        printf(" __ __ __\n");
    }
}

int main()
{
     system("color 7A");
    char *x;
    char p1c, p2c;
    char p1[25], p2[24];
    system("cls");
    printf("Welcome to XOX Game\n");
    printf("Enter Name of Player 1 : ");
    gets(p1);
    printf("Enter Name of Player 2 : ");
    gets(p2);
    x = array;
    printf(" __ __ __\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("|%c ", array[i][j]);
        }
        printf("|\n");
        printf(" __ __ __\n");
    }
    printf("%s's Turn :-> Choose a Number to change it into X : ", p1);
    scanf("%c", &p1c);
    check(p1c);
    return 0;
}