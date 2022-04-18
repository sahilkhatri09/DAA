#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
void inorder(Node* root)
{
	if (root != NULL) {
		inorder(root->left);
		cout << root->data<<" ";
		inorder(root->right);
	}
}
Node* insert( Node* node, int data)
{
	if (node == NULL)
		return new Node(data);

	if (data < node->data)
		node->left = insert(node->left, data);
	else
		node->right = insert(node->right, data);

	return node;
}
Node* minValueNode(Node* node)
{
	Node* current = node;
	while (current && current->left != NULL)
		current = current->left;

	return current;
}

 Node* deleteNode( Node* root, int data)
{
	if (root == NULL)
		return root;
	if (data < root->data)
		root->left = deleteNode(root->left, data);
	else if (data > root->data)
		root->right = deleteNode(root->right, data);
	else {
		if (root->left==NULL and root->right==NULL)
			return NULL;
		else if (root->left == NULL) {
			Node* temp = root->right;
			delete root;
			return temp;
		}
		else if (root->right == NULL) {
		   Node* temp = root->left;
			delete root;
			return temp;
		}
	    Node* temp = minValueNode(root->right);
		root->data = temp->data;
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}

int main()
{ 
    cout<<endl;
    cout<<"Sahil Khatri - 2020UII7414"<<endl;
    cout<<endl;
	/* Let us create following BST
			50
		/	 \
		30	 70
		/ \ / \
	20 40 60 80 */
	Node* root = NULL;
	root = insert(root, 50);
	root = insert(root, 30);
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root, 70);
	root = insert(root, 60);
	root = insert(root, 80);

	cout << "Inorder traversal of the given tree \n";
	inorder(root);
    cout<<endl;
	root = deleteNode(root, 20);
	cout << "Inorder traversal of the modified tree \n";
	inorder(root);
    cout<<endl;
    cout<<endl;
	return 0;
}

