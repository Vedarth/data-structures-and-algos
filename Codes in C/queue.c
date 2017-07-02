#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isempty();
void enqueue(int value,int *);
void disp(int *);
int dequeue(int *);
int front=-1,rear=-1,l;
void main()
{
     char n;
        int value;
    printf("Enter the size of queue: ");
    scanf("%d",&l);
    int *s;
    s=(int *)malloc(sizeof(int)*l);
    n=48;
    while(((int)n-48)!=4)
    {

        printf("1.insert\n2.delete\n3.display\n4.Exit\n");
        scanf("%c",&n);
        switch((int)n-48)
        {
        case 1:
            printf("Enter value :");
            scanf("%d",&value);
            enqueue(value,s);
            break;
        case 2:
            if(isempty())
                printf("Underflow");
            else
            printf("%d got dequeued",dequeue(s));
            break;
        case 3:
            disp(s);
            break;
        case 4:
            break;
        }
    }
}
void enqueue(int value,int *s)
{
    if(isempty())
    {
        front=0;
        rear=0;
        s[rear]=value;
        return;
    }
    else if(front==0&&rear==l-1||front==rear+1)
        {printf("Overflow");
        return;}
    else
    {
        rear=(rear+1)%l;
        s[rear]=value;
    }
}
int dequeue(int *s)
{
    int value;
   if(isempty())
        printf("Underflow");
   else if(front==rear)
   {
       value=s[front];
       front=-1;
       rear=-1;
       return value;
   }
   else
   {
       value=s[front];
       front=(front+1)%l;
       return value;
   }
   return 0;
}
int isempty()
{
    if(front==-1&&rear==-1)
        return 1;
    else
        return 0;
}
void disp(int *s)
{
    int i;
    if(!isempty())
        printf("Empty queue\n");
    else
    for(i=front;i!=rear;i=(i+1)%l)
        printf("%d->",s[i]);
        printf("%d",s[i]);
        printf("\n");
}
