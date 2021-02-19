#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

struct Node *reverseLinkedList (struct Node *head, int k)
{
    // Complete this method
    Node *curr=head;
    Node *prev=NULL;
    stack <Node*> s;
    while(curr!=NULL)
    {
        int count=0;
        while(curr!=NULL&&count<k)
        {
            s.push(curr);
            curr=curr->next;
            count++;
        }
        while(s.size()>0)
        {
        if(prev==NULL)
        {
            prev=s.top();
            head=prev;
            s.pop();
        }
        else{
            prev->next=s.top();
            prev=prev->next;
            s.pop();
        }
        }


    }

     prev->next=NULL;

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
    list1 = insertele(list1, 7);
    list1 = insertele(list1, 8);
    list1 = insertele(list1, 9);
    list1 = insertele(list1, 10);

    int k = 3;

    list1 = reverseLinkedList(list1, k);
    printList(list1);
}
