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
}*root;

/*
 * Class Declaration
 */
class BST
{
    public:
	void insert(node *, node *);
	void preorder(node *);
	BST()
	{
	    root = NULL;
	}
};
/*
 * Main Contains Menu
 */
int main()
{
    int choice, num;
    BST bst;
    node *temp;
    while (1)
    {
	clrscr();
	cout<<"-----------------"<<endl;
	cout<<"Operations on BST"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"1.Insert Element "<<endl;
	cout<<"2 preorder traversal"<<endl;
	cout<<"7.Quit"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
	case 1:
	    temp = new node;
	    cout<<"Enter the number to be inserted : ";
	    cin>>temp->info;
	    bst.insert(root, temp);getch();break;
	case 2:
	    cout<<"Preorder Traversal of BST:"<<endl;
	    bst.preorder(root);
	    cout<<endl;getch();
	    break;
	case 7:
	    exit(1);
	default:
	    cout<<"Wrong choice"<<endl;
	}
    }
}


/*
 * Inserting Element into the Tree
 */
void BST::insert(node *tree, node *newnode)
{
    if (root == NULL)
    {
	root = new node;
	root->info = newnode->info;
	root->left = NULL;
	root->right = NULL;
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
	    insert(tree->left, newnode);
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
	    insert(tree->right, newnode);
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



/*
 * Pre Order Traversal
 */

void BST::preorder(node *ptr)
{
    if (root == NULL)
    {
	cout<<"Tree is empty"<<endl;
	return;
    }
    if (ptr != NULL)
    {
	cout<<ptr->info<<"  ";
	preorder(ptr->left);
	preorder(ptr->right);
    }
}

