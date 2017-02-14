#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node *next;
};
struct node *create();
void push(struct node *ptr,char value);
char pop(struct node *ptr);
void operate(char s,struct node *ptr);
void main()
{
    struct node *head;
    head=create();
    char s;
    printf("Enter the string: ");
    while(s!='\n')
    {scanf("%c",&s);
    int i;
        if(s>='0'&&s<='9')
            {printf("%c",s);
            continue;}
        if(s=='(')
        {push(head,s);
        continue;
        }
        if(s=='+'||s=='-'||s=='*'||s=='/'||s=='%')
        {
            operate(s,head);
            continue;
        }
        if(s==')')
        {
            while((head->next)->data!='(')
                printf("%c",pop(head));
            pop(head);
        }
    }
        while(head->next!=NULL)
        printf("%c",pop(head));
}

struct node *create()
{
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    ptr->next=NULL;
    return ptr;
}
void push(struct node *ptr,char value)
{
    struct node *newptr;
    newptr=malloc(sizeof(struct node));
    newptr->next=ptr->next;
    ptr->next=newptr;
    newptr->data=value;
}
char pop(struct node *ptr)
{
    struct nose *temp;
    char c;
    temp=ptr->next;
    c=(ptr->next)->data;
    if(ptr->next!=NULL)
        ptr->next=(ptr->next)->next;
    free(temp);
    return c;
}
void operate(char s,struct node* ptr)
{
    if(ptr->next!=NULL)
    {char p=(ptr->next)->data;
            if(p=='+'||p=='-')
                push(ptr,s);
            if(p=='*'||p=='/'||p=='%')
            {
                if(s=='+'||s=='-')
                {
                    printf("%c",pop(ptr));
                    operate(s,ptr);
                }
                if(s=='*'||s=='/'||s=='%')
                {
                    push(ptr,s);
                }
            }
            if(p=='(')
                push(ptr,s);
    }
    else
        push(ptr,s);
}
