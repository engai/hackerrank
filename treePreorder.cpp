/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Preorder(node *root) {

	//Check if end of tree
	if(root == NULL)
		return;

	//Preorder: visit left right
	std::cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);

}