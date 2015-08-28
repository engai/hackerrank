/*
  Author: Ed Ngai (/dreamvillen)

  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{ 
  // Create current node ptr and make it equal to head
  Node* current = head;

  // Create a new node with the given data
  Node* newNode = new Node();
  newNode->data = data;

  // If inserting at the head, check to see if list is empty 
  if(position == 0){

    if(head == NULL)
      newNode->next = NULL;
    else
      newNode->next = head;

    head = newNode;
  }

  //else if inserting anywhere other than the head
  else{
    
    //find the node preceding the position you are trying to insert
    for(int i=1; i < position; i++){
      current = current->next;
    }

    //add node
    newNode->next = current->next;
    current->next = newNode;
  }

  return head;

}