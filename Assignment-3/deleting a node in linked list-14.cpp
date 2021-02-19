#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;


Node *deleteLastNode(Node *head) {
	if(head == NULL) {
		return head;
	} else {
		Node *curr = head;
		Node *preCurr = head;
		while(curr->next != NULL) {
			preCurr = curr;
			curr = curr->next;
		}
		preCurr->next = NULL;
	}
	return head;
}

int main() {
    struct Node *list1 = NULL;

    list1 = insertele(list1, 1);
    list1 = insertele(list1, 2);
    list1 = insertele(list1, 3);
    list1 = insertele(list1, 4);
    list1 = insertele(list1, 5);
    list1 = insertele(list1, 6);

    list1 = deleteLastNode(list1);
    printList(list1);
}
