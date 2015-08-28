
/*
  Author: Ed Ngai (/dreamvillen)
  Problem: Inserting Node to the beginning of Linked list
*/
/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Create new node for new data
  Node* newNode = new Node();
  newNode->data = data;

  // if list is empty, new node's next is NULL
  if(head == NULL){
  	newNode->next = NULL;
  }

  // else the new node's next is the previous head
  else{
  	newNode->next = head;
  }

  // set head to new node & return
  head = newNode;

  return head;
}
