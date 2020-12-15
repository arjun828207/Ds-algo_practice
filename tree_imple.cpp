// C++ program for various types of functions implemented on trees
#include <iostream>
#include<queue>
#include <climits>
#include<stack>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node
{
	int data;
	struct Node* left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct Node* node)
{
	if (node == NULL)
		return;

	// first recur on left subtree
	printPostorder(node->left);

	// then recur on right subtree
	printPostorder(node->right);

	// now deal with the node
	cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	/* then print the data of node */
	cout << node->data << " ";

	/* now recur on right child */
	printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left sutree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}

int height(Node *root)
{


        if(root==NULL)
        return 0;
    else
    {
         return max(height(root->left),height(root->right))+1;
    }

}
void reverselevelorder(Node *root)
{
	if(root==NULL)
	return;
	queue<Node*> Q;
	stack<int> s;
	Q.push(root);
	while(!Q.empty())
	{
		Node* current=Q.front();
		s.push(current->data);
		if (current->left!=NULL)
		{
			Q.push(current->left);
		}
		if (current->right != NULL)
		{
			Q.push(current->right);
		}
		Q.pop();
	}
		while(s.empty()==false)
		{
			cout <<s.top() <<" ";
			s.pop();
		}
}

void LevelOrder(Node *root)
{
	if (root==NULL)
	return;
	queue<Node*> Q;
	//push the reference of the root into the queue 
	Q.push(root);
	//while there is atleast one discovered node
	while (!Q.empty())
	{
		Node* current=Q.front();
		cout<<current->data<<" ";
		//itereate to left of the root
		if(current->left != NULL)
		Q.push(current->left);
		//itereate to right of the root
		if(current->right != NULL)
		Q.push(current->right);
		Q.pop();//removing the element at front
	}

}
void printleftView(Node* root) 
{ 
    if (!root) 
        return; 
 
    queue<Node*> q; 
    q.push(root); 
 
    while (!q.empty()) 
    {     
        // number of nodes at current level 
        int n = q.size(); 
         
        // Traverse all nodes of current level 
        for(int i = 1; i <= n; i++) 
        { 
            Node* temp = q.front(); 
            q.pop(); 
                 
            // Print the left most element 
            // at the level 
            if (i == 1) 
                cout<<temp->data<<" "; 
             
            // Add left node to queue 
            if (temp->left != NULL) 
                q.push(temp->left); 
 
            // Add right node to queue 
            if (temp->right != NULL) 
                q.push(temp->right); 
        } 
    } 
}     
void printrightView(Node* root) 
{ 
    if (!root) 
        return; 
 
    queue<Node*> q; 
    q.push(root); 
 
    while (!q.empty()) 
    {     
        // number of nodes at current level 
        int n = q.size(); 
         
        // Traverse all nodes of current level 
        for(int i = n; i >=1 ; i--) 
        { 
            Node* temp = q.front(); 
            q.pop(); 
                 
            // Print the left most element 
            // at the level 
            if (i == 1) 
                cout<<temp->data<<" "; 
             
            // Add left node to queue 
            if (temp->left != NULL) 
                q.push(temp->left); 
 
            // Add right node to queue 
            if (temp->right != NULL) 
                q.push(temp->right); 
        } 
    } 
}     

int get_max(Node *root)
{
	if(root == NULL)
	return INT_MIN;
	else
	{//recurcively call for the left and right nodes
		return max(root->data,max(get_max(root->left),get_max(root->right)));
	}
	
}
int get_min(Node *root)
{
	if(root == NULL)
	return INT_MAX;
	else
	{
		return min(root->data,min(get_min(root->right),get_min(root->left)));
	}
	
}
/* Driver program to test above functions*/
int main()
{
	 Node *root = new Node(1);
	root->left			 = new Node(2);
	root->right		 = new Node(3);
	root->left->left	 = new Node(4);
	root->left->right = new Node(5);
	root->right->left= new Node(6);
	root->right->right	= new Node(7);

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);

	cout<< "\nHeight of the binary tree is \n";
	cout<<height(root);

	cout<<"\nLevel order traversal of binary tree is \n";
	LevelOrder(root);

	cout<<"\nReverse LevelOrder traversal binary tree is \n";
	reverselevelorder(root);

	cout<<"\nLeftRight view of binary tree is \n";
	printleftView(root); 

	cout<<"\nRight view of binary tree is \n";
	printrightView(root);

	cout<<"\nMaximum element of binary tree is \n";
	cout<<get_max(root);

	cout<<"\nMinimum element of binary tree is \n";
	cout<<get_min(root);

	return 0;
}
