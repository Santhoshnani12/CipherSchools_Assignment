#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

Node *reorderList(Node* list1) {
        if(list1==NULL)
            return list1;
        Node *head = list1;
        vector<Node*> node;
        Node* temp=list1;
        while(temp!=NULL)
        {
            node.push_back(temp);
            temp=temp->next;
        }
        bool chance=true;
        int i=1;
        Node* curr=list1;
        int j=node.size()-1;
        //true means from the back
        //
        while(i<=j)
        {
            if(chance)
            {
                curr->next=node[j];
                curr=node[j];
                j--;
                chance=false;
            }
            else
            {
                curr->next=node[i];
                curr=node[i];
                i++;
                chance=true;
            }
        }
        curr->next=NULL;
        return list1;
    }

int main() {
    struct Node *list1 = NULL;

    list1 = insertele(list1, 1);
    list1 = insertele(list1, 2);
    list1 = insertele(list1, 3);
    list1 = insertele(list1, 4);
    list1 = insertele(list1, 5);
    list1 = insertele(list1, 6);

    list1 = reorderList(list1);
    printList(list1);
}
