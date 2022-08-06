/*
 * C++ Program To Implement BST
 */
# include <iostream.h>
# include <conio.h>
#include<stdlib.h>
/*
 * Node Declaration
 */
struct node
{
    int info;
    struct node *left;
    struct node *right;
}*root,*root2;

/*
 * Class Declaration
 */
class BST
{
    public:
	void insert(node *, node *,int);

	void inorder(node *,int);

	int areMirror(node* a, node* b);

	BST()
	{
	    root = NULL;root2 = NULL;
	}
};
/*
 * Main Contains Menu
 */
int main()
{
    int num;
	char choice;
    BST bst;
    node *temp;
    clrscr();
    cout<<"Enter your choice for tree A(y/n): ";
	cin>>choice;

    while(choice=='y')
    {

	cout<<" TREE A"<<endl;
	cout<<"-----------------"<<endl;
	    temp = new node;
	    cout<<"Enter the number to be inserted in tree A: ";
	    cin>>temp->info;
	    bst.insert(root, temp,1);
	cout<<"Enter your choice for tree A(y/n): ";
	cin>>choice;
    }//end of while
	  getch();



	cout<<"Enter your choice for tree B(y/n): ";
	cin>>choice;
    while(choice=='y')
    {

	cout<<" TREE B"<<endl;
	cout<<"-----------------"<<endl;
	temp = new node;
	    cout<<"Enter the number to be inserted in tree B: ";
	    cin>>temp->info;
	    bst.insert(root2, temp,2);
	cout<<"Enter your choice for tree B(y/n): ";
	cin>>choice;
	}//end of while






	    cout<<"Inorder Traversal of A tree:"<<endl;
	    bst.inorder(root,1);cout<<"\n";

	    cout<<"Inorder Traversal of B tree:"<<endl;
	    bst.inorder(root2,2);cout<<"\n";
	    cout<<endl;getch();
	    bst.areMirror(root, root2)? cout << "Tree are similar Yes" : cout << "No";
		 getch();

getch();
return 0;
}


/*
 * Inserting Element into the Tree
 */
void BST::insert(node *tree, node *newnode,int t)
{
    if (root == NULL&&t==1)
    {
	root=newnode;
	root->info = newnode->info;
	root->left = NULL;
	root->right = NULL;
	cout<<"Root Node is Added"<<endl;
	return;
    }
	if (root2 == NULL&&t==2)
    {

	root2=newnode;
	root2->info = newnode->info;
	root2->left = NULL;
	root2->right = NULL;
	cout<<"Root Node is Added"<<endl;
	return;
    }

    if (tree->info == newnode->info)
    {
	cout<<"Element already in the tree"<<endl;
	return;
    }
    if (tree->info > newnode->info)
    {
	if (tree->left != NULL)
	{
	    insert(tree->left, newnode,t);
	}
	else
	{
	    tree->left = newnode;
	    (tree->left)->left = NULL;
	    (tree->left)->right = NULL;
	    cout<<"Node Added To Left"<<endl;
	    return;
	}
    }
    else
    {
	if (tree->right != NULL)
	{
	    insert(tree->right, newnode,t);
	}
	else
	{
	    tree->right = newnode;
	    (tree->right)->left = NULL;
	    (tree->right)->right = NULL;
	    cout<<"Node Added To Right"<<endl;
	    return;
	}
    }
}



/* In Order Traversal
 */

void BST::inorder(node *ptr,int t)
{
    if (root == NULL&&t==1)
    {
	cout<<"Tree A is empty"<<endl;
	return;
    }
     if (root2 == NULL&&t==2)
    {
	cout<<"Tree B is empty"<<endl;
	return;
    }

    if (ptr != NULL)
    {
	inorder(ptr->left,1);
	cout<<ptr->info<<"  ";
	inorder(ptr->right,1);
    }
}

/* Given two trees, return true if they are
similar of each other */
int BST::areMirror(node* a, node* b)
{
	/* Base case : Both empty */
	if (a==NULL && b==NULL)
		return 1;

	// If only one is empty
	if (a==NULL || b == NULL)
		return 0;

	/* Both non-empty, compare them recursively
	Note that in recursive calls, we pass left
	of one tree and right of other tree */
	
	return a->info == b->info &&
			areMirror(a->left, b->left) &&
			areMirror(a->right, b->right);
}




