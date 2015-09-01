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


void Postorder(node *root) {

	//Check for end of tree
	if(root == NULL)
		return;

	//PostOrder: left right visit
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";

}