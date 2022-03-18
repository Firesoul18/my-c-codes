#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*p,*tmp,*tmp1,*head;
void insert_end(int);
void insert_beg(int);
void idelete(int);
void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main ()
{ 
    head = (struct node*)malloc(sizeof(struct node));
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp1 = (struct node*)malloc(sizeof(struct node));
    p = (struct node*)malloc(sizeof(struct node));

    head = tmp;

    tmp->data=34;
    tmp->next=tmp1;

    tmp1 ->data = 33;
    tmp1->next = p;

    p->data=333;
    p->next=NULL;

    display(head);
    // printf("%d",tmp->data);
    return 0;
}