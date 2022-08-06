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
	void inorder(node *);
	void postorder(node *);
	void display(node *, int);
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
	cout<<"2.Inorder traversal"<<endl;
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
	    cout<<"Inorder Traversal of BST:"<<endl;
	    bst.inorder(root);
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
	root = newnode;
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
/*
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

 */



/* In Order Traversal
 */

void BST::inorder(node *ptr)
{
    if (root == NULL)
    {
	cout<<"Tree is empty"<<endl;
	return;
    }
    if (ptr != NULL)
    {
	inorder(ptr->left);
	cout<<ptr->info<<"  ";
	inorder(ptr->right);
    }
}

/*
 * Postorder Traversal
 */
/*
void BST::postorder(node *ptr)
{
    if (root == NULL)
    {
	cout<<"Tree is empty"<<endl;
	return;
    }
    if (ptr != NULL)
    {
	postorder(ptr->left);
	postorder(ptr->right);
	cout<<ptr->info<<"  ";
    }
}
*/



/*
 * Display Tree Structure
 */





/*
void BST::display(node *tree,int level)
{
		    int i;
	if (tree == root&&level==0)
	    {
	    for (i = 0;i < 4;i++)
		cout<<"       ";
	    cout<<"Root->:  ";
	    cout<<tree->info;
	    cout<<"\n";  level=level+1;
	    }
	    node *Ltree,*Rtree;

		   Ltree=tree->left;
		   Rtree=tree->right;

	while (Ltree->left != NULL&&Ltree->right!=NULL )
	{    for (i = 0;i < 3;i++)
		cout<<"       ";
	    cout<<(tree->left)->info<<"       "<<(tree->right)->info;
	   tree=tree->left;
	   // display(tree->left, 0);
	}
	 cout<<(tree->left)->info<<"       "<<(tree->right)->info;
    }

    /*
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
*/

/*

void BST::display(node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
	display(ptr->right, level+1);
	cout<<endl;
	if (ptr == root)
	    cout<<"Root->:  ";
	else
	{
	 for (i = 0;i < level;i++)
		cout<<"       ";
	}
	cout<<ptr->info; //cout<<"\n";
	display(ptr->left, level+1);
    }
}

*/