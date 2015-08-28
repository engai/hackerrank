/*
  Author: Ed Ngai (/dreamvillen)

  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{	
	// Create current, previous, and next ptrs
	Node* current = head;
	Node* previous;
	Node* next; 

	// While the list isn't empty or not end of list
	while(current != NULL){
		// save the next node
		next = current->next;

		// reverse the next ptr
		current->next = previous;
		
		//move onto next nodes
		previous = current;
		current = next;
	}

	head = previous;

	return head;
}