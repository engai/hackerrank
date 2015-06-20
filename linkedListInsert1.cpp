/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  //new node to insert. Initiate data
  Node* newNode = new Node;
  newNode->data = data;
  
  //if list is empty, add the new node 
  if(head == NULL){
      
      head = newNode;
      head -> next = NULL;
      
  }
  //else find last node
  else{
      Node* cur = head;
      while(cur->next != NULL){
          cur = cur->next;
      }
      
      //add node to the end
      newNode->next = NULL;
      cur -> next = newNode;
      
  }
    //return head of the list
    return head;
  
}