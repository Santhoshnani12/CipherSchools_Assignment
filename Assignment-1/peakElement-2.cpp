#include<iostream>
using namespace std;

int peak_element(int a[], int n) {
	int l, r, mid;
	l = 0, r = n-1;
	while(l <= r) {
		mid = (l+r)/2;
		if(a[mid-1] < a[mid] && a[mid+1] < a[mid]) {
			return a[mid];
		}
		else if(a[mid+1] > a[mid]) {
			l = mid+1;
		}
		else if(a[mid-1] > a[mid]){
			r = mid-1;
		}
	}
	
}

int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<peak_element(a, n);
}
