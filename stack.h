#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* create();
void push(int value,struct node *ptr);
void disp(struct node *ptr);
int pop(struct node *ptr);
/*void main()
{
    struct node *head;
    int value,n;
    char s[100];
    head=create();
    do
    {
        printf("Enter\n1: Push\n2: Pop\n3: Display stack\n4: Exit\n5: infix to post fix\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter the number to push\n");
            scanf("%d",&value);
            push(value,head);
            break;
        case 2:
            value=pop(head);
            printf("%d got popped\n",value);
            break;
        case 3:
            disp(head);
            break;
        case 4:
            break;
        case 5:
            scanf("%s",s);

        }
    }while(n!=4);
}*/
struct node* create()
{
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    ptr->data=0;
    ptr->next=NULL;
    return ptr;
}
void push(int value,struct node *ptr)
{
    struct node *newptr;
    newptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=ptr->data+1;
    newptr->next=ptr->next;
    ptr->next=newptr;
    newptr->data=value;
}
void disp(struct node *ptr)
{
    printf("Head=%d",ptr->data);
    ptr=ptr->next;
    while(ptr!=NULL)
    {
        printf("\n\t%d\n\t|",ptr->data);
        ptr=ptr->next;
    }
    printf("\n\tNULL\n");
}
int pop(struct node *ptr)
{   int value;
    if(ptr->data>0)
    {
        ptr->data=ptr->data-1;
        value=(ptr->next)->data;
        struct node *temp;
        temp=ptr->next;
        ptr->next=(ptr->next)->next;
        free(temp);
        return value;
    }
    else
        printf("Underflow");
}
