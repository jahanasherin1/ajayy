#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left,*right;
};
void main()
{
	struct node*root=(struct node*)0; //null bst
	struct node*insert(struct node*,int);
	void display(struct node*);
	struct node*search(struct node *,int);
	struct node*delete(struct node*,int);			
	int opt,data;
do
{
	printf("1. insert \n");
	printf("2. search \n");
	printf("3. delete \n");
	printf("4. display \n");
	printf("5. exit \n");
	printf("your option");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:printf("Data");
		       scanf("%d",&data);
		       root=insert(root,data);
		       break;
	        case 2:printf("data");
	        	scanf("%d",&data);
	        	if(search(root,data)==0)
	        		printf("not Found");
        		else
        			printf("found");
			break;
		case 3:printf("data");
			scanf("%d",&data);
			root=delete(root,data);
			break;
		case 4:display(root);
			break;
		case 5: exit(0);
	}
	}
	while(1);
}
// display bst contents-inorder
void display(struct node*bst)
{
	if(bst!=(struct node*)0)
	{
		display(bst->left);
		printf("%d\t",bst->data);
		dsplay(bst->right);
	}
}
// to insert a data into bst
struct node*insert(struct node*bst,int data)
{
	struct node*t,*t1=bst;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=data;
	t->left=t->right=(struct node*)0;
	
	if(bst==(struct node*)0)//case of null bst
		bst=t;
		else
		{
		while(t1->data!=data&&t1-left!=0&&t1->right!=0)
		if(data < t->data)
			t1=t1->left;
		else
			t1=t1->right;
		if(t1->data==data)
		printf("Duplicate \n");
		else if(data <t1->data)
				t1->left=t;
			else
				t1->right=t;
			return bst;
			}			
}
// to search an item
struct node*search(struct node*best,int data)
{
	while(bst!=(struct node*)0&&bst->data!=data
	if(data<bst->data)
		bst=bst->left;
	else
		bst=bst->right;
		return bst;
}

// to delete an item from bst

struct node*delete(struct node*bst, int data)
{
	struct node*t1=bst,*t2;
	while(t1!0&&t1->data!=data)
	{
		t2=t1;
		if(data<=1->data)
			t1=t1->left;
		else
			t1=t1->right;
	}
	if(t!=(struct node*)0)
	{
		if(bst==t)
		if(bst->left==0)
			bst=bst->right;
		else
			bst=bst->left;
		else if(t1->left==0&&t1->right==0)
		
		if(t2->left==t1)
			t2->left=0;
		else
			t2->right=0;
		else if(t1->left=0||t1->right==0)
		if(t2->left==t1)
			t2->left=t1->left==0
			?t1->right=t1->left;
		else
			t2->right=t1->left==0
			?t1->right=t1->left;
	else
	{
		sucpar=t1;
			t2=t1->right;
		while(t->left!=0)
		{
		sucpar=t2;
			t2=t2->left;
			}
			
		t1->data=t2->data;
		
		if(t2==sucpar->left)
			sucpar->left=t2->right;
		else
		sucpar->right=t2->right;
		}
		return bst;
}	
				

	
	


	




