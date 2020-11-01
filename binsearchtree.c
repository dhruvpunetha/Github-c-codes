#include <stdio.h>
#include <stdlib.h>
struct tree
{
    struct tree *left;
    int info;
    struct tree *right;
}*root=NULL,*temp=NULL,*ro=NULL;
void create()
{
int data;

    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct tree *)malloc(1*sizeof(struct tree));
    temp->info = data;
    temp->left = temp->right = NULL;
}
void insert()
{
if(temp->info<root->info)
{
    if(root->left==NULL)
    {
     root->left=temp;
    }
    else
    {
        root=root->left;
    insert();
    }
}
else
{
    if(root->right==NULL)
    {
        root->right=temp;
    }
    else
    {
        root=root->right;
        insert();
    }
}
}
int i=0;
int counttotal(struct tree *r)
{
    if(r!=NULL)
    {

        counttotal(r->left);
        i++;
        counttotal(r->right);
    }
    return i;
}
int leaf(struct tree *r)
{
    if(r==NULL)
    {
        return 0;
    }
    if(r->left == NULL && r->right==NULL)
    {
return 1;
    }
    else
    {
        return leaf(r->left)+leaf(r->right);
    }
}
void main()
{
    int num;
    int total;
    int ch=1;
    while(ch==1)
    {
        create();
        if(root==NULL)
        {
            root=temp;
            root->left=NULL;
            root->right=NULL;
            ro=root;
        }
        else
        {
            insert();
        }
        printf("WANT TO CONTINUE");
        scanf("%d",&ch);
        root=ro;
    }
    root=ro;
    total=counttotal(root);
    printf("TOTAL NODES ARE : %d \n",total);
    total=leaf(root);
    printf("TOTAL LEAF NODES ARE : %d \n",total);
}
