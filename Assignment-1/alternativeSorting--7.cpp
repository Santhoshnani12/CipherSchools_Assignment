#include<bits/stdc++.h>
using namespace std;

void alternateSorting(vector<int> a, int n) {
	sort(a.begin(), a.end());
	int left = 0, right = n-1;
	int i=0;
	while(left <= right) {
		if(i % 2 == 0) {
			cout<<a[right];
			right--;
		} else {
			cout<<a[left];
			left++;
		}
		i++;
	}
}

int main() {
	int n, x;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++) {
		cin>>x;
		a.push_back(x);
	}
	alternateSorting(a, n);
}
