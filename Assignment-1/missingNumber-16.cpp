#include<iostream>
using namespace std;

int missingNumber(int a[], int n) {
	int sum=0;
	for(int i=0;i<n;i++) {
		sum += a[i];
	}
	int sum1 = ((n+1) * (n+2))/ 2;
	return sum1-sum;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<missingNumber(a, n);
}
