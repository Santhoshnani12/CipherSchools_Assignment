#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

Node* sortedMerge(Node* head1, Node* head2)
{
    Node* L1 = head1;
    Node* L2 = head2;
    Node* temp = new Node (0);
    Node* mergeList = new Node (0);

    if (L1 -> data < L2 -> data)
    {
        mergeList = L1;
        L1 = L1 -> next;
    }
    else
    {
        mergeList = L2;
        L2 = L2 -> next;
    }

    temp = mergeList;

    while (L1 && L2)
    {
        if (L1 -> data < L2 -> data)
            {
                temp -> next = L1;
                temp = temp -> next;
                L1 = L1 -> next;
            }
        else
            {
                temp -> next = L2;
                temp = temp -> next;
                L2 = L2 -> next;
            }
    }

    if (!L1)
        temp -> next = L2;
    else
        temp -> next = L1;

    return mergeList;
}

int main() {
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;

    list1 = insertele(list1, 1);
    list1 = insertele(list1, 3);
    list1 = insertele(list1, 5);
    list1 = insertele(list1, 7);
    list1 = insertele(list1, 9);

    list2 = insertele(list2, 2);
    list2 = insertele(list2, 4);
    list2 = insertele(list2, 6);
    list2 = insertele(list2, 8);
    list2 = insertele(list2, 10);

    struct Node *mergeList = sortedMerge(list1, list2);
    printList(mergeList);
}
