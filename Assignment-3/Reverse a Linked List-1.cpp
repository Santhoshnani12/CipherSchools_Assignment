#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"


using namespace std;

Node *reverseALinkedList(Node *head) {
	struct Node  *prev, *curr, *after;
	after = head;
	curr = head;
	prev = NULL;
	while(after != NULL) {
		after = curr->next;
		curr->next = prev;
		prev = curr;
		curr = after;
	}
	head = prev;
	return head;
}



int main() {
   struct Node *head = NULL;
   head = insert(head, 5);	
   head = insert(head, 10);
   head = insert(head, 15);
   head = insert(head, 20);
   head = insert(head, 25);
   
   head = reverseALinkedList(head);
   printList(head);
}
