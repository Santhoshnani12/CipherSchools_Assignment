#include<bits/stdc++.h>
using namespace std;

// please consider this solution, this is the solution that i was already done in my hackerrank so i copied it from hackerrank
// so it will save my time.

int main() {

    stack <int> stack1;
    stack <int> stack2;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int q;
        cin>>q;
        if(q == 1){
            int ele;
            cin>>ele;
            stack1.push(ele);
        }
        if(q == 2){
            if(!stack2.empty()){
                stack2.pop();
            }
            else{
                while(!stack1.empty()){
                    int temp = stack1.top();
                    stack2.push(temp);
                    stack1.pop();
                }
                stack2.pop();
            }
        }
        if(q == 3){
            if(!stack2.empty()){
                cout<<stack2.top()<<endl;
            }
            else{
                while(!stack1.empty()){
                    int temp = stack1.top();
                    stack2.push(temp);
                    stack1.pop();
                }
                cout<<stack2.top()<<endl;
            }
        }
    }
    return 0;
}
