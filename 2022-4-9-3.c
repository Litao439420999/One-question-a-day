#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node *next;
}Nd;

int main(void)
{
    Nd *p,*q,*head;

    head = p =(Nd*)malloc(sizeof(Nd));
    scanf("%d",&p->data); //头结点的数据成员

    while(p->data!=0) //给出0结束条件，退出循环
    {
        q = p;

        p = (Nd*)malloc(sizeof(Nd));
        scanf("%d",&p->data);
        q->next = p;
    }
    p -> next =NULL;

    p = head;
    printf("链表数据成员是:\n");

    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }

    return 0;

}