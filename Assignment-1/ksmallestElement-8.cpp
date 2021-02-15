#include<bits/stdc++.h>
using namespace std;

vector<int> ksmallest(vector<int> a, int n, int k) {
	vector<int> res(k);
	int max_ele=a[0];
	int max_index=0;
	for(int i=0;i<k;i++) {
		res[i] = a[i];
		if(res[i] > max_ele) {
			max_ele = res[i];
			max_index = i;
		}
	}
	for(int i=k;i<n;i++) {
	    if(a[i] < max_ele) {
	    	int j = max_index;
	    	while(j < k-1) {
	    		res[j] = res[j+1];
	    		j++;
			}
			res[j] = a[i];
			max_ele = res[0];
			for(int f=0;f<k;f++) {
				if(res[f] > max_ele) {
					max_ele = res[f];
					max_index = f;
				}
			}
		}
	}
	return res;
}

int main() {
	int n, x;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++) {
		cin>>x;
		a.push_back(x);
	}
	int k;
	cin>>k;
	vector<int> res = ksmallest(a, n, k);
	for(int i=0;i<k;i++) {
		cout<<res[i];
	}
}
