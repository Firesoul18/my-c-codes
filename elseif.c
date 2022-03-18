//incomplete....
#include <stdio.h>
int main ()
{
    int m1,n1,m2,n2,q;
    printf("Enter Rows in first Matrix: ");
    scanf("%d",&m1);
    printf("Enter Columns in first Matrix: ");
    scanf("%d",&n1);
    printf("Enter Rows in Second Matrix: ");
    scanf("%d",&m2);
    printf("Enter Columns in Second Matrix: ");
    scanf("%d",&n2);
    int a[m1][n1];
    int b[m2][n2];
    printf("Enter 1 for AXB or Enter 2 for BXA: ");
    scanf("%d",&q);

    switch(q)
    {
        case 1:
        if(n1==m2)
        {
            for(int i = 0; i<m1; i++)
            {
                for(int j = 0; j<n1; j++)
                {
                    printf("Enter (%d,%d)th element for First Matrix: ",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
             for(int i = 0; i<m2; i++)
            {
                for(int j= 0; j<n2; j++)
                {
                    printf("Enter (%d,%d)th element for Second Matrix: ",i,j);
                    scanf("%d",&b[i][j]);
                }
            }

            printf("A X B: \n");
            int g,gg,temp=0;
            int w=n2-1;
            int l[m1][n2];
            for(int i=0; i<m1; i++)
            {
                for(int j=0; j<n1; j++)
                {
                    temp=g;
                    g = temp+a[i][j]*b[j][i];
                    gg=gg+a[i][j]*b[j][w];
                }
                if(i==0)
                {printf("%d ",g); printf("%d",gg);}
                else
                {
                    printf("%d %d",gg,g);
                }
                printf("\n");
                g=0;
                gg=0;
                // l[i][w]=g;
                w=w-1;
            }
        }
    }
    return 0;
}