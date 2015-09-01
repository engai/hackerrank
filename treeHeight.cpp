/*
Author: Ed Ngai (/dreamvillen)

The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{	
	if(root == NULL)
		return 0;

	//Get height recursively
	int leftHeight = height(root->left);
	int rightHeight = height(root->right);

	//Return the larger value
	if(leftHeight > rightHeight)
		return leftHeight + 1;
	else
		return rightHeight + 1;
  
}
  