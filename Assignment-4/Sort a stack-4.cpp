#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}

void SortedStack :: sort()
{
    if(s.size() == 0){
        return;
    }
    int t = s.top();
    s.pop();
    sort();
    stack<int> k;
    while(s.size() > 0 && s.top() > t){
        k.push(s.top());
        s.pop();
    }
    s.push(t);
    while(!k.empty()){
        s.push(k.top());
        k.pop();
    }
}
