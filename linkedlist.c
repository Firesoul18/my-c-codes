//ye koi program nhi h
#include <stdio.h>
#include <stdlib.h>
int main()
{

    struct node
    {
        int data;
        struct node *next;
    } *tmp
        tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = 1;
    tmp->next = NULL;
//this is not a porogram
    void insert_beg(int ele)
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = ele;
        if (p == NULL)
        {
            tmp->next = NULL;
        }
        else
        {
            tmp->next = p;
        }
        p = tmp;
    }
    return 0;
}
//yo koi program koni bhai sahab

void insert_end(int ele)
{
    tmp = p;
    tmp1 = (struct node *)malloc(sizeof(struct node));
    tmp1->data = ele;
    tmp1->next = NULL;
    if (p == NULL)
        p = tmp1;
    else
    {
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
            tmp->tmp1;
        }
    }
}
//le bhi maane koni,le tu to krle phd, kra le run program.
