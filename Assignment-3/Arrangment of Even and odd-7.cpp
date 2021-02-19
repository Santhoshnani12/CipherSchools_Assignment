#include<bits/stdc++.h>
#include "LinkedList implementation-0.cpp"

using namespace std;

Node *evenAndOdd(Node *list1) {
    struct Node* odd=list1;
   struct Node* even=list1->next,*res=even;

   while(1)
   {
       if(odd==NULL||even==NULL||even->next==NULL)
        {
            odd->next = res;
            break;
        }

       odd->next=even->next;
       odd=even->next;
       if (odd->next == NULL)
        {
            even->next = NULL;
            odd->next = res;
            break;
        }
       even->next=odd->next;
       even=odd->next;
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

    list1 = evenAndOdd(list1);
    printList(list1);
}
