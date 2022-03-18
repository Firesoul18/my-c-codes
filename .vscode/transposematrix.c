#include <stdio.h>
#include<stdlib.h>
int m,n;
int transpose(int array[][n])
{

    int t[n][m];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            t[i][j]=array[j][i];
            
        }
    }
    printf("\nAfter Transpose: \n");
    display(t);
    return 0;
}
void display(int array[][n])
{
    _sleep(1000);
    printf("\n The Matrix is: \n");
     for(int i=0; i<m; i++)
    {
        printf("\t");
        for(int j =0; j<n; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    
}
int main ()
{
    printf("Enter Number of Rows: ");
    scanf("%d",&m);
    printf("Enter Number of Columns: ");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            printf("Enter (%d,%d)th element of Matrix: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        printf("\nOriginal Array: \n");
        display(a);
        transpose(a);

    
    return 0;
}