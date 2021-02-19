#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

Node *insert(struct Node* head, int ele) {
	struct Node* t = new Node(ele);
	if(head == NULL) {
		head = t;
		return head;
	} else {
		Node *curr = head;
		while(curr -> next != NULL) {
			curr = curr->next;
		}
		curr->next = t;
	}
	return head;
}

int deleteLastNode(Node *head) {
	int x = -1;
	if(head == NULL) {
		return x;
	} else {
		Node *curr = head;
		Node *preCurr = head;
		while(curr->next != NULL) {
			preCurr = curr;
			curr = curr->next;
		}
		x = curr->data;
		preCurr->next = NULL;
	}
	return x;
}

void printList(Node *head) {
	Node *curr = head;
	while(curr != NULL) {
		cout<<curr->data<<" ";
		curr = curr->next;
	}
}
//
//int main() {
//    Node *head = NULL;
//    head = insert(head, 5);
//	head = insert(head, 10);
//	head = insert(head, 15);
//	head = insert(head, 20);
//	cout<<"Deleted Node data : "<<deleteLastNode(head)<<"\n";
//	
//	printList(head);
//}
