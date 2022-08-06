#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *left, *right;
}*root1, *root2;
class BST
{
  public:
    void insert(node *, node *, int);
    void inorder(node *, int);
    int areMirror(node* a, node* b);
    BST()
    {
      root1 = NULL;
      root2 = NULL;
    }
};
int main()
{
  clrscr();
  int num;
  char choice,pos;
  BST bst;
  node *temp;
  cout<<"\nTREE A\n";
  cout<<"\nEnter your choice for tree A(y/n): ";
  cin>>choice;
  while(choice == 'y')
  {
    temp = new node;
    cout<<"\nEnter the number to be inserted in tree A : ";
    cin>>temp->info;
    bst.insert(root1,temp,1);
    cout<<"\nEnter your choice for tree A(y/n) : ";
    cin>>choice;
  }
  cout<<"\nTREE B\n";
  cout<<"\nEnter your choice for tree B(y/n): ";
  cin>>choice;
  while(choice == 'y')
  {
    temp = new node;
    cout<<"\nEnter the number to be inserted in tree B : ";
    cin>>temp->info;
    bst.insert(root2,temp,2);
    cout<<"\nEnter your choice for tree B(y/n) : ";
    cin>>choice;
  }
  cout<<"\nInorder traversal of tree A : ";
  bst.inorder(root1,1);
  cout<<"\n";
  cout<<"\nInorder traversal of tree B : ";
  bst.inorder(root2,2);
  cout<<"\n";
  bst.areMirror(root1,root2)? cout<<"\nTrees are mirror images of each other" : cout<<"\nTrees are not mirror images of each other";
  getch();
  return 0;
}
void BST::insert(node *tree, node *newnode, int t)
{
  if(root1 == NULL && t == 1)
  {
    root1 = newnode;
    root1->info = newnode->info;
    root1->left = NULL;
    root1->right = NULL;
    cout<<"Root node is added"<<endl;
    return;
  }
  if(root2 == NULL && t == 2)
  {
    root2 = newnode;
    root2->info = newnode->info;
    root2->left = NULL;
    root2->right = NULL;
    cout<<"Root node is added"<<endl;
    return;
  }
  if(tree->info == newnode->info)
  {
    cout<<"Element already in the tree"<<endl;
    return;
  }
  char pos;
  cout<<"Where do u want to insert in tree A(L/R) : ";
  cin>>pos;
  if(pos == 'L')
  {
    if(tree->left != NULL)
      insert(tree->left, newnode, t);
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
      insert(tree->right, newnode, t);
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
void BST::inorder(node *ptr, int t)
{
  if(root1 == NULL && t == 1)
  {
    cout<<"Tree A is empty"<<endl;
    return;
  }
  if(root2 == NULL && t == 2)
  {
    cout<<"Tree B is empty"<<endl;
    return;
  }
  if(ptr != NULL)
  {
    inorder(ptr->left,1);
    cout<<ptr->info<<" ";
    inorder(ptr->right,1);
  }
}
int BST::areMirror(node* a, node* b)
{
  if(a == NULL && b == NULL)
    return 1;
  if(a == NULL || b == NULL)
    return 0;
  return a->info == b->info && areMirror(a->left, b->right) && areMirror(a->right, b->left);
}