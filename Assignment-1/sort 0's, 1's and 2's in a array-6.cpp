#include<iostream> 
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int left = 0, mid = 0, right = n-1;
	while(mid <= right) {
		switch(a[mid]) {
			case 0:
				swap(a[left++], a[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(a[mid], a[right--]);
				break;
		}
	}
	for(int i=0;i<n;i++) {
		cout<<a[i];
	}
}
