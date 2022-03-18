#include <stdio.h>
#include<stdlib.h>
int f(int array*[][2])
{
    for (int i = 0; i < 2; i++)
    {
        int temp;
        for (int j = 0; j < 2; j++)
        {
            *array[i][j] = temp;
            *array[i][j] = *array[1 - i][1 - j];
            temp = *array[1 - i][1 - j];
        }
    }
    return 0;
}

int main()
{
    int arr[2][2] = {{2, 3}, {4, 5}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    f(arr);
    printf("After reversal :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//something is wrong......