#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;


Node* merge(Node* l1, Node* l2)
{
    if(!l1)
        return l2;
    if(!l2)
        return l1;
    if(l1 -> data < l2 -> data)
    {
        l1 -> next = merge(l1 -> next, l2);
        return l1;
    }
    else
    {
        l2 -> next = merge(l1, l2 -> next);
        return l2;
    }
}

Node* sortList(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return head;
    Node* slow = head;
    Node* fast = head -> next;
    while(fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    struct Node* newHead = slow -> next;
    slow -> next = NULL;

    return merge(sortList(head), sortList(newHead));
}

int main() {
    struct Node *list1 = NULL;

    list1 = insertele(list1, 5);
    list1 = insertele(list1, 3);
    list1 = insertele(list1, 1);
    list1 = insertele(list1, 2);
    list1 = insertele(list1, 6);
    list1 = insertele(list1, 4);

    list1 = sortList(list1);
    printList(list1);
}
