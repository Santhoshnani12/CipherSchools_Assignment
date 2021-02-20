#include<bits/stdc++.h>

using namespace std;

int main() {
    deque<int> d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

    for(int i=0;i<5;i++) {
        cout<<d[i]<<" ";
    }

    d.pop_back();
    d.pop_back();

     for(int i=0;i<3;i++) {
        cout<<d[i]<<" ";
    }
}
