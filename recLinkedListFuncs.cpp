#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  if(head == NULL){
	  return 0;
  }
  return recursiveSum(head->next) + head->data;
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  if(head->next == NULL){
	return head->data;
  }
  if(head->data > recursiveLargestValue(head->next)){
	return head->data;
  }
  else{
	return recursiveLargestValue(head->next);
  }

}
