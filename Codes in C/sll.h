#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* create_list();
void disp(struct node *ptr);
void insert_a_node(int index,int value,struct node *ptr);
int search(int value,struct node *ptr);
void delete_a_node(int index,struct node *ptr);
void modify_a_node(int value,int newvalue,struct node *ptr);
void main()
{
    int n,index,value,i;
    struct node *head;
    head=create_list();
    do
    {
    printf("Enter the desired operation:\n1. Display all nodes\n2. Insert a node\n3. Search a node\n4. Delete a node\n5. Modify a node\n6. Delete the first node\n7. Insert a new node at the end\n8. Exit\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        disp(head);
        break;
    case 2:
        printf("Enter the index: ");
        scanf("%d",&index);
        printf("\nEnter the value: ");
        scanf("%d",&value);
        insert_a_node(index,value,head);
        break;
    case 3:
        printf("Enter the data to be searched: ");
        scanf("%d",&value);
        index=search(value,head);
        if(index==-1)
            printf("The value is not in the list\n");
        else
            printf("The location of the given data in the list id %d\n",index);
        break;
    case 4:
        printf("Enter the value to be deleted: ");
        scanf("%d",&value);
        index=search(value,head);
        if(index==-1)
            printf("The entered element does not exist\n");
        else
            delete_a_node(index,head);
        break;
    case 5:
        printf("Enter the value to be modified: ");
        scanf("%d",&value);
        printf("Enter the new value: ");
        int newvalue;
        scanf("%d",&newvalue);
        modify_a_node(value,newvalue,head);
        break;
    case 6:
        delete_a_node(0,head);
        break;
    case 7:
        printf("Enter the value of node to be added at the end of the list: ");
        scanf("%d",&value);
        insert_a_node(head->data,value,head);
        break;
    case 8:
        break;
    }
    }while(n!=8);
}
struct node* create_list()
{
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    ptr->data=0;
    ptr->next=NULL;
    return ptr;
}
void disp(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
void insert_a_node(int index,int value,struct node *ptr)
{
    struct node *newptr;
    int i=0;
    if(index<0||index>ptr->data)
    {
        printf("\nThe given index is invalid\n");
        return;
    }
    ptr->data=ptr->data+1;
    newptr=malloc(sizeof(struct node));
    while(i<index)
    {
        ptr=ptr->next;
        i++;
    }
    newptr->next=ptr->next;
    ptr->next=newptr;
    newptr->data=value;
}
int search(int value,struct node *ptr)
{
    int i=0;
    ptr=ptr->next;
    while(ptr!=NULL)
    {
        if(ptr->data==value)
            return i;
        ptr=ptr->next;
        i++;
    }
    return -1;
}
void delete_a_node(int index,struct node *ptr)
{
    int i=0;
    struct node *temp;
    ptr->data=ptr->data-1;
    if(ptr->data<0)
    {
        printf("The list is empty now\n");
        return;
    }
    while(i<index)
    {
        ptr=ptr->next;
        i++;
    }
    temp=ptr->next;
    ptr->next=(ptr->next)->next;
    free(temp);
}
void modify_a_node(int value,int newvalue,struct node *ptr)
{
    int i=0;
    ptr=ptr->next;
    while(ptr!=NULL)
    {

        if(ptr->data==value)
        {
            ptr->data=newvalue;
            return ;
        }
        ptr=ptr->next;
    }
    printf("The given value was not found\n");
}
