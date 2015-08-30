/*
  Author: Ed Ngai (/dreamvillen)

  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  Node* current = head;   //Working node
  int length = 0;  //Holds length of list

  /* Find length of list */
  while(current != NULL){
    current = current->next;
    length++;
  }

  /* Go back to head of list */
  current = head;

  /* Get to the correct node*/
  for(int i = 0; i < (length-positionFromTail-1); i++){
    current = current->next;
  }

  /*Return data at node*/
  return current->data;

}
