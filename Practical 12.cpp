#include <iostream.h>
#include <conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *left, *right;
}*root;
class BST
{
  public:
    void insert(node *, node *);
    void preorder(node *);
    void inorder(node *);
    void postorder(node *);
    void display(node *, int);
    BST()
    {
      root = NULL;
    }
};
int main()
{
  clrscr();
  int choice, num;
  BST bst;
  node *temp;
  while(1)
  {
    cout<<"\n-----------------"<<endl;
    cout<<"Operations on BST"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"1.Insert element"<<endl;
    cout<<"2.Preorder traversal"<<endl;
    cout<<"3.Inorder traversal"<<endl;
    cout<<"4.Postorder traversal"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
      case 1 : temp = new node;
	         cout<<"\nEnter the number to be inserted : ";
	         cin>>temp->info;
	         bst.insert(root, temp);
	         break;
      case 2 : if(root == NULL)
	           cout<<"\nTree is empty!\n";
	         else
	         {
	           cout<<"\nPreorder traversal of BST : ";
	           bst.preorder(root);
	           cout<<endl;
	         }
	         break;
      case 3 : if(root == NULL)
	           cout<<"\nTree is empty!\n";
	         else
	         {
	           cout<<"\nInorder traversal of BST : ";
	           bst.inorder(root);
	           cout<<endl;
	         }
	         break;
      case 4 : if(root == NULL)
	           cout<<"\nTree is empty!\n";
	         else
	         {
	           cout<<"\nPostorder traversal of BST : ";
	           bst.postorder(root);
	           cout<<endl;
	         }
	         break;
      case 5 : exit(1);
      default: cout<<"\nInvalid choice"<<endl;
    }
  }
}
void BST::insert(node *tree, node *newnode)
{
  if(root == NULL)
  {
    root = newnode;
    root->info = newnode->info;
    root->left = NULL;
    root->right = NULL;
    cout<<"Root node is added"<<endl;
    return;
  }
  if(tree->info == newnode->info)
  {
    cout<<"Element already in the tree"<<endl;
    return;
  }
  if(tree->info > newnode->info)
  {
    if(tree->left != NULL)
      insert(tree->left, newnode);
    else
    {
      tree->left = newnode;
      (tree->left)->left = NULL;
      (tree->left)->right = NULL;
      cout<<"Node added to left"<<endl;
      return;
    }
  }
  else
  {
    if(tree->right != NULL)
      insert(tree->right, newnode);
    else
    {
      tree->right = newnode;
      (tree->right)->left = NULL;
      (tree->right)->right = NULL;
      cout<<"Node added to right"<<endl;
      return;
    }
  }
}
void BST::preorder(node *ptr)
{
  if(ptr != NULL)
  {
    cout<<ptr->info<<" ";
    preorder(ptr->left);
    preorder(ptr->right);
  }
}
void BST::inorder(node *ptr)
{
  if(ptr != NULL)
  {
    inorder(ptr->left);
    cout<<ptr->info<<" ";
    inorder(ptr->right);
  }
}
void BST::postorder(node *ptr)
{
  if(ptr != NULL)
  {
    postorder(ptr->left);
    postorder(ptr->right);
    cout<<ptr->info<<" ";
  }
}