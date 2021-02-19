#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

int intersection(Node *list1, Node *list2) {
    if(list1 == NULL || list2 == NULL) {
        return -1;
    }

    struct Node *t1, *t2;
    t1 = list1;
    t2 = list2;

    while(t1 != t2) {
       if(t1 == NULL) {
        t1 = list2;
       } else {
           t1 = t1->next;
       }
       if(t2 == NULL) {
        t2 = list1;
       } else {
           t2 = t2->next;
       }
    }
    if(t1 != NULL) {
            return t1->data;
    }
    return -1;
}

int main() {
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;

    list1 = insertele(list1, 1);
    list1 = insertele(list1, 2);
    list1 = insertele(list1, 3);
    list1 = insertele(list1, 4);
    list1 = insertele(list1, 5);

    list2 = insertele(list2, 9);
    list2 = insertele(list2, 10);

    //intersecting list1 with list2
    list2->next->next = list1->next->next;

    cout<<intersection(list1, list2);
}
