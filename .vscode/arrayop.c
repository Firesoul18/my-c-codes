#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 7A");
    system("cls");
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 11;
    ptr[2] = 2;
    ptr[3] = 34;
    ptr[4] = 13;
    ptr[5] = 43;

    printf("Before Sorting: \n");
    display(ptr, 6);
    sort(ptr, 6);
    // qsort(ptr,6,6*sizeof(int));
    printf("\nAfter Sorting: \n");
    display(ptr, 6);
    printf("\nAfter Inserting: \n");
    insert(ptr, 6, 27);
    display(ptr, 7);
    printf("\nAfter Deleting: \n");
    delete (ptr, 7, 11);
    display(ptr, 7);

    return 0;
}

void sort(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ptr[i] > ptr[j])
            {
                int a;
                a = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = a;
            }
        }
    }
}

void display(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", ptr[i]);
    }
}

void insert(int *ptr, int n, int x)
{
    // x is the new element;
    // n is the size of array

    ptr = (int *)realloc(ptr, (n + 1) * sizeof(int));

    for (int i = n; i >= 0; i--)
    {
        if (ptr[i] > x)
        {
            ptr[i + 1] = ptr[i];
        }
        else
        {
            ptr[i + 1] = x;
            break;
        }
    }
}

void delete (int *ptr, int n, int x)
{

    // n is number of elements in the array
    // x is the element that we want to delete
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] == x)
        {

            ptr[i] = ptr[i + 1];
            ptr[i + 1] = NULL;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (ptr[i] == NULL)
        {
            ptr[i] = ptr[i + 1];
            ptr[i + 1] = NULL;
        }
    }
}