/*

Author: Ed Ngai (/dreamvillen)

Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
	//Create node ptrs
	node* newNode = new node();
	newNode->data = value;
	node* current = root;

	//If tree is empty, set root to new node
	if(root == NULL){
		root = newNode;
		return root;
	}

	while(true){
		//Check if node goes left
		if(current->data > value){
			//If no left child, set left child to new node
			if(current->left == NULL){
				current->left = newNode;
				return root;
			}

			//else move left
			current = current -> left;
		}

		//Check if node goes right
		else if(current->data < value){
			//If no right child, set right child to new node
			if(current->right == NULL){
				current->right = newNode;
				return root;
			}

			current = current -> right;
		}
		
		//If node is already in tree, return
		else if(current->data == value)
			return root;

	}

}