/*
  Author: Ed Ngai (/dreamvillen)

  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* RemoveDuplicates(Node *head)
{
  /*Create current and previous ptrs*/
  Node* current = head;
  Node* previous = current;

  current = current->next;

  /*While ends of list has not been reached*/
  while(current != NULL){

  	/*If data in both nodes are the same, delete the latter one*/
  	if(current->data == previous->data){
  		previous->next = current->next;
  		current = current->next;
  	}

  	/*Move onto next nodes*/
  	else{
  		previous = current;
  		current = current->next;
  	}
  }

  return head;
}