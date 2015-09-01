/* 
Author: Ed Ngai (/dreamvillen)

you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Inorder(node *root) {

	//Check for end of tree
	if(root == NULL)
		return;

	//InOrder: left visit right
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);


}
