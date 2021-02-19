#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

bool palindromic(struct Node* head) {
	struct Node* mid = NULL, *slow = head, *fast = head;
	
	//finding mid Node
	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	mid = slow;
	
	//reversing nodes after mid
	struct Node *prev, *curr, *after;
	curr = after = mid->next;
	prev = mid;
	while(after != NULL) {
		after = curr->next;
		curr->next = prev;
		prev = curr;
		curr = after;
	}
	
	// checking for palindrome
	
	struct Node *left, *right;
	left = head;
	right = prev;
	while(left != mid) {
		if(left->data != right->data) {
			return false;
		}
		left = left->next;
		right = right->next;
	}
	return true;
	
}

int main() {
   struct Node *head = NULL;
   head = insert(head, 1);	
   head = insert(head, 2);
   head = insert(head, 3);
   head = insert(head, 2);
   head = insert(head, 3); 
   bool res = palindromic(head);
   
   if(res) {
   	cout<<"Palindrome";
   } else {
   	cout<<"Not a Palindrome";
   }
}
