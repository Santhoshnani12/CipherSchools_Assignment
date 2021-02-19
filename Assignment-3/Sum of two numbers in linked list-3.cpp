#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

Node *sumOfTwoNum(struct Node *l1, struct Node *l2) {
    struct Node *res = new Node(0);
    struct Node *temp = res;
    int carry = 0;
    while(l1!=NULL || l2!= NULL || carry) {
        int sum = 0;
        if(l1!=NULL) {
            sum += l1->data;
            l1 = l1->next;
        }
        if(l2!=NULL) {
            sum += l2->data;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;
        struct Node *t = new Node(sum%10);
        temp->next = t;
        temp = t;
    }
    return res->next;
}

int main() {
    struct Node *list1  = NULL;
    struct Node *list2 = NULL;
    struct Node *resList = NULL;
    list1 = insertele(list1, 2);
    list1 = insertele(list1, 9);
    list1 = insertele(list1, 9);

    list2 = insertele(list2, 3);
    list2 = insertele(list2, 1);
    list2 = insertele(list2, 7);

    resList = sumOfTwoNum(list1, list2);

    printList(resList);
}
