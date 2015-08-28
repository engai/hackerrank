/*
  Author: Ed Ngai (/dreamvillen)

  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // Create local node ptrs
  Node* currentA = headA;
  Node* currentB = headB;


  while(true){
    //If reached end of list at the same time. The lists are identical  
    if(currentA == NULL && currentB == NULL)
      return 1;

    //if reached end of list at different times. The lists are not identical
    if(currentA == NULL && currentB != NULL)
      return 0;
    if(currentA != NULL && currentB == NULL)
      return 0;

    //If data at the current position is different, The lists are not identical
    if(currentA->data != currentB->data)
      return 0;

    //Move to next nodes
    else{
      currentA = currentA->next;
      currentB = currentB->next;
    }
  }

}