#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *ptr;
};
typedef struct node s;
int main ()
{

    s *head;
    head = malloc(sizeof(s));
    head->data = 10;
    head->ptr = NULL;
    s *p;
    p=addend(head,11);
    p=addend(head,12);
    p=addend(head,13);
    show(head);
    p=malloc(sizeof(s));

    return 0;
}

s* addend(struct node *pointer, int data)
{
    struct node *x = malloc(sizeof(s));
    x->data = data;
    pointer->ptr = x;
    x->ptr = NULL;
    return x;
}

void show(s *pt)
{
    while(pt!=NULL)
    {
        printf("\n%d",pt->data);
        pt=pt->ptr;
    }

}
