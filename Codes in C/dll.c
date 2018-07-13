#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node* create();
void insert(int index,int value,struct node *ptr);
void disp(struct node* ptr);
int search_a_node(int value,struct node *ptr);
void delete_a_node(int index,struct node *ptr);
void modify_a_node(int value,int newval,struct node *ptr);
void delete_all(int value,struct node *ptr);
void modify_all(int value,int newval,struct node *ptr);
void main()
{
    struct node *head;
    int value,index;
    int newval;
    head=create();
    int n;
    do
    {
        printf("1. Insert a new node\n2. Display the whole list\n3. Search a node\n4. Delete a node\n5. Modify a node\n6. delete all occurences of an element\n7. modify all values\n8. Exit\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter the index: ");
            scanf("%d",&index);
            printf("Enter the value: ");
            scanf("%d",&value);
            insert(index,value,head);
            break;
        case 2:
            disp(head);
            break;
        case 3:
            printf("Enter the value you want to search: ");
            scanf("%d",&value);
            index=search_a_node(value,head);
            if(index==-1)
                printf("The element is not present in the list\n");
            else
                printf("The element is at %d position",index);
                break;
        case 4:
            printf("enter the value you want to delete: ");
            scanf("%d",&value);
            index=search_a_node(value,head);
            if(index==-1)
                printf("The element is not present in the list\n");
            else
                delete_a_node(index,head);
                break;
        case 5:
            printf("Enter the value to replace: ");
            scanf("%d",&value);
            printf("Enter the new value: ");
            scanf("%d",&newval);
            modify_a_node(value,newval,head);
        case 6:
            printf("Enter the value you want to remove along with all the duplicates");
            scanf("%d",&value);
            delete_all(value,head);
        case 7:
            printf("Enter the value to modify");
            scanf("%d",&value);
            printf("Enter the new value");
            scanf("%d",&newval);
            modify_all(value,newval,head);
        case 8:
            break;
        }
    }while(n!=8);
}
struct node* create()
{
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr->data=0;
    ptr->next=NULL;
}
void insert(int index,int value,struct node *ptr)
{
    if(index<0||index>ptr->data)
    {
        printf("Invalid index\n");
        return;
    }
    int i=0;
    ptr->data=ptr->data+1;
    while(i<index)
    {
        ptr=ptr->next;
        i++;
    }
    struct node *newptr;
    newptr=malloc(sizeof(struct node));
    newptr->prev=ptr;
    if((ptr->next)!=NULL)
    (ptr->next)->prev=newptr;
    newptr->next=ptr->next;
    ptr->next=newptr;
    newptr->data=value;
}
void disp(struct node* ptr)
{
    printf("Head=%d: ",ptr->data);
    ptr=ptr->next;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int search_a_node(int value,struct node *ptr)
{
    int i=0;
    ptr=ptr->next;
    while(ptr!=NULL)
    {
        if(ptr->data==value)
            break;
        i++;
        ptr=ptr->next;
    }
    if(ptr==NULL)
        return -1;
    else
        return i;
}
void delete_a_node(int index,struct node *ptr)
{
    struct node *temp;
    int i=0;
    ptr->data=ptr->data-1;
    while(i<index)
    {
        i++;
        ptr=ptr->next;
    }
    temp=ptr->next;
    if((ptr->next)->next!=NULL)
        ((ptr->next)->next)->prev=ptr;
    ptr->next=(ptr->next)->next;
    free(temp);
}
void modify_a_node(int value,int newval,struct node *ptr)
{
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        if(ptr==NULL)
            break;
        if(ptr->data==value)
            ptr->data=newval;
    }
}
void delete_all(int value,struct node *ptr)
{
    int j=0;
    struct node *root=ptr;
    while(ptr->next!=NULL)
    {
        if((ptr->next)->data==value)
        {
            j++;
            struct node *temp;
            temp=ptr->next;
            if((ptr->next)->next!=NULL)
                ((ptr->next)->next)->prev=ptr;
            ptr->next=(ptr->next)->next;
            free(temp);
        }
        else
            ptr=ptr->next;
    }
    if(j==0)
        printf("The element is not in the list");
    root->data=root->data-j;
}
void modify_all(int value,int newval,struct node *ptr)
{
    int j=0;
    ptr=ptr->next;
    while(ptr!=NULL)
    {

        if(ptr->data==value)
            {ptr->data=newval;
            j++;}
            ptr=ptr->next;
    }
    if(j==0)
        printf("The given element does not exist in the list");
}
