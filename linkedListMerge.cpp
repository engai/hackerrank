/*
  Author: Ed Ngai (/dreamvillen)

  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{	
	/*Create local node ptrs*/
	Node* newHead = new Node();
	Node* working;

	/*Check if any lists are empty*/
	if(headA == NULL && headB != NULL){
		return headB;
	}
	else if(headA != NULL && headB == NULL){
		return headA;
	}
	else if(headA == NULL && headB == NULL){
		return NULL;
	}

	/*initialize head of new node*/
	if(headA->data <= headB->data){
		newHead->next = headA;
		working = newHead->next;
		headA = headA->next;
	}

	else{
		newHead->next = headB;
		working = newHead->next;
		headB = headB->next;
	}

	while(true){
		/*Check to see if end of list*/
		if(headA == NULL && headB == NULL){
			break;
		}
		if(headA == NULL && headB !=NULL){
			working->next = headB;
			break;
		}
		if(headA != NULL && headB ==NULL){
			working->next = headA;
			break;
		}

		/*Merge lists in ascending order*/
		if(headA->data <= headB->data){
			working->next = headA;
			working = working->next;
			headA = headA->next;
		}
		else{
			working->next = headB;
			working = working->next;
			headB = headB->next;
		}

	}

	/*Return new list*/
	return newHead->next;
}
