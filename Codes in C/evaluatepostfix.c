#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"
void main()
{
    struct node *head;
    head=create();
    char s;
    printf("Enter the postfix expression: ");
    while(s!='\n')
    {
        scanf("%c",&s);
        int i;
        if(s>='0'&&s<='9')
            {
            push((int)s-48,head);
            continue;
            }
        if(s=='+'||s=='-'||s=='*'||s=='/'||s=='%')
        {
            int b=pop(head);
            int a=pop(head);
            int c;
            if(s=='+')
                c=a+b;
            if(s=='-')
                c=a-b;
            if(s=='*')
                c=a*b;
            if(s=='/')
                c=a/b;
            if(c=='%')
                c=a%b;
            push(c,head);

        }
}
 printf("%d",(head->next)->data);
}

