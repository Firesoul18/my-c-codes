#include <stdio.h>
#include <stdlib.h>
struct array
{
    int used_size;
    int total_size;
    int *ptr;
} marks;

void Create(struct array *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

int main()
{
    Create(&marks, 10, 5);
    show(&marks);
    setvalue(&marks);
    show(&marks);
    return 0;
}

void show(struct array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}
void setvalue(struct array *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter Value for Array's %d Element: ", i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}