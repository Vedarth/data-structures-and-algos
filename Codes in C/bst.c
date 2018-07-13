#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node *create();
struct node* insert(struct node *ptr,int value);
void inorder(struct node *ptr);
void postorder(struct node *ptr);
void preorder(struct node *ptr);
void disp(struct node *ptr);
int height_node(int value,struct node *ptr);
int height_total(struct node *ptr);
struct node *search(int value,struct node *ptr);
void main()
{
	struct node *head;
	int n,value;
	head=NULL;
	do
	{
	printf("1.To insert\n2.To display\n3.inorder traversal\n4.preorder traversal\n5.postorder traversal\n6.Exit\n7.Height of a node\n8.Search\n9.total height of tree\n");
	scanf("%d",&n);
	switch(n)
	{case 1:
	printf("Enter the value to insert");
	scanf("%d",&value);
	head=insert(head,value);
	break;
	case 2:
	disp(head);
	break;
	case 3:
	inorder(head);
	break;
	case 4:
	postorder(head);
	break;
	case 5:
	preorder(head);
	break;
	case 6: break;
	case 7:
        printf("Enter the node whose height you want to find out: ");
        scanf("%d",&value);
        if(search(value,head)!=NULL)
            printf("%d",height_node(value,head));
        else
            printf("this node doesn't exist");
	case 8:
        printf("Enter the value to search: ");
        scanf("%d",&value);
        if(search(value,head)!=NULL)
            printf("Element found");
        else
            printf("element is not present in the list");
        break;
    case 9:
        printf("height = %d",height_total(head));
        break;
	}
	}while(n!=6);

}
struct node *create()
{
	struct node *newptr;
	newptr=malloc(sizeof(struct node));
	newptr->left=NULL;
	newptr->right=NULL;
	newptr->data=0;
	return newptr;
}
void disp(struct node *ptr)
{
printf("%d\n",ptr->data);
return;
}
struct node* insert(struct node *ptr,int value)
{

		if(ptr==NULL)
			{
			struct node *newptr;
			newptr=create();
			newptr->data=value;
			return newptr;}
		if(ptr->data>value)
			ptr->left=insert(ptr->left,value);
		else
			ptr->right=insert(ptr->right,value);
	return ptr;

}

void inorder(struct node *ptr)
{
	if(ptr!=NULL)
		{
		inorder(ptr->left);
		printf("%d",ptr->data);
		inorder(ptr->right);

}
}
void postorder(struct node *ptr)
{
	if(ptr!=NULL)
		{
		printf("%d",ptr->data);
		postorder(ptr->left);
		postorder(ptr->right);
}
}
void preorder(struct node *ptr)
{
	if(ptr!=NULL)
		{
		preorder(ptr->left);
		preorder(ptr->right);
		printf("%d",ptr->data);
}
}
struct node *search(int value,struct node *ptr)
{
    if(ptr==NULL)
        return ptr;
    if(ptr->data==value)
        return ptr;
    if(ptr->data<value)
        return search(value,ptr->right);
    return search(value,ptr->left);
}
int height_node(int value,struct node *ptr)
{
    if(ptr==NULL)
        return 0;
    if(ptr->data==value)
        return 1;
    if(ptr->data>value)
        return height_node(value,ptr->left+1);
    if(ptr->data<value)
        return height_node(value,ptr->right+1);
}
int height_total(struct node *ptr)
{
    if(ptr==NULL)
        return 0;
    int lheight=height(ptr->left);
    int rheight=height(ptr->right);
    if(lheight>rheight)
        return (lheight+1);
    else
        return (rheight+1);
}
