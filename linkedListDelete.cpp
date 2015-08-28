/*
  Author: Ed Ngai (/dreamvillen)

  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Create a current node to traverse list
  Node* current = head;
  // Create a previous node to hold the node preceding the node you want to delete
  Node* previous;

  // if deleting head, change head to the next node and free deleted node
  if(position == 0){
  	head = head->next;
  	free(current);
  	return head;
  }

  // Find the current node and the one preceding it
  for(int i=0; i < position; i++){
  	previous = current;
  	current = current->next;
  }

  // Relink the list and free the deleted node
  previous->next = current->next;
  free(current);

  return head;

}
