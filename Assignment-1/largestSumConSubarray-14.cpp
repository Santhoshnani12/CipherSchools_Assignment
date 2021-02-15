#include<iostream>
using namespace std;

void largestSum(int a[], int n) {
	int max_sum = a[0];
	int sum = a[0];
	for(int i=1;i<n;i++) {
		sum = max(a[i] ,sum + a[i]);
		max_sum = max(sum, max_sum);
	}
	cout<<max_sum;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	largestSum(a, n);
}
