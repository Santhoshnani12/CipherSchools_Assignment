#include<bits/stdc++.h>
using namespace std;

void majority_element(int a[], int n) {
	unordered_map<int,int> m;
	int res;
	bool flag = 0;
	for(int i=0;i<n;i++) {
		m[a[i]]++;
	}
	for(auto i : m) {
		if(i.second > (n/2)) {
			flag = 1;
			res = i.first;
		}
	}
	if(flag) {
		cout<<res;
	} else {
		cout<<"No majority";
	}
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	majority_element(a, n);
}
