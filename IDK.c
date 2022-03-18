#include <stdio.h>

int main()
{
    int sum, r1, c1, r2, c2, a[r1][c1], b[r2][c2], ab[r1][c2];
   
    printf("Enter the number of rows and columns  for first matrix\n");
    scanf("%d", &r1);
    scanf("%d", &c1);

    printf("Enter the number of rows and columns  for second matrix\n");
    scanf("%d", &r2);
    scanf("%d", &c2);

    printf("enter elements of your first matrix one by one\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter  a[%d][%d] element of your matrix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter elements of your second matrix one by one\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("enter  b[%d][%d] element of your matrix\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("your first matrix is :");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("your second matrix is :");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    printf("a x b :\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for(int k =0; k<r1+1; k++)
            {sum = sum + a[i][k]*b[k][j];}
            printf("%d ", sum);
            sum = 0;
        }printf("\n");
    }
    return 0;
}
