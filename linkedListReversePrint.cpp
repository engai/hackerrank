/*
  Author: Ed Ngai (/dreamvillen)

  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  //If end of list, return
  if(head == NULL)
    return;

  // Recursively call the fuction to start at the end
  ReversePrint(head->next);

  // Print the numbers starting from the end
  cout<<head->data<<endl;

}
