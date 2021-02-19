#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

Node *removeLoop(Node *slow, Node *list1) {
    struct Node *head = list1;
    while(1) {
        if(slow->next == head->next) {
            slow->next = NULL;
            break;
        }
        slow = slow->next;
        head = head->next;
    }
    return list1;
}

Node *detectAndRemoveLoop(Node *list1) {
    struct Node *fast, *slow, *temp;
    fast = slow = temp = list1;
    while(fast != NULL || fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow) {
            cout<<"Loop Detected"<<endl;
            list1 = removeLoop(slow, temp);
            break;
        }
    }
    return list1;
}

int main() {
    struct Node *list1 = NULL;
    list1 = insertele(list1, 1);
    list1 = insertele(list1, 2);
    list1 = insertele(list1, 3);
    list1 = insertele(list1, 4);
    list1 = insertele(list1, 5);

    //creating loop from 5 to 3
    list1->next->next->next->next->next = list1->next->next;

    list1 = detectAndRemoveLoop(list1);
    printList(list1);
}
