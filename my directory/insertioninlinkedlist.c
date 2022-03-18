#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

} * head, *p, *first, *second, *third, *last;

void display()
{
    struct node *z = (struct node *)malloc(sizeof(struct node));
    z = head;
    while (z != NULL)
    {
        printf("\nThe Linked List Before the Action : %d\n", z->data);
        z = z->next;
    }
}
void display2()
{
    struct node *z = (struct node *)malloc(sizeof(struct node));
    z = head;
    while (z != NULL)
    {
        printf("\nThe Linked List After the Action : %d\n", z->data);
        z = z->next;
    }
}

void delete (int x)
{
    struct node *z = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    p = head;
    while (p->data != x)
    {
        p = p->next;
    }
    z = head;
    
    ptr = head;

    while (ptr->data != x)
    {
        ptr = ptr->next;
    }
    
    if (p->data == head->data)
    {
        head = p->next;
    }
    else
    {
        while (z->next != p)
    {
        z = z->next;
        printf("\n z->data = %d", z->data);
    }
        ptr=ptr->next;
        z->next = ptr;
    }
}

void insert(int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    printf("\nDone!!!!!!!\nWait For Six Seconds..................\n");
    for (int i = 1; i < 6; i++)
    {
        printf("\n%d\n", i);
        _sleep(1000);
    }
    system("cls");
}
int main()
{

    system("cls");

    head = (struct node *)malloc(sizeof(struct node));
    p = (struct node *)malloc(sizeof(struct node));

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head = first;

    first->data = 79;
    first->next = second;
    second->data = 70;
    second->next = third;
    third->data = 65;
    third->next = last;
    last->data = 23;
    last->next = NULL;

    display();

    int r;
    printf("What do you want to insert in the end : ");
    scanf("%d", &r);
    insert(r);
    display2();
    int d;
    printf("\nWhat do you want to remove : ");
    scanf("%d", &d);
    delete (d);
    display2();
    return 0;
}
//time complexity = O(n)