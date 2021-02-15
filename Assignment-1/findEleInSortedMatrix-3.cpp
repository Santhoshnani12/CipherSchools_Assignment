#include<iostream>
using namespace std;

string findElementInSortedMatrix(int m[4][4], int n, int ele) {
	int i, j;
	i = 0, j=n-1;
	while(i < n && j >= 0) {
		if(m[i][j] == ele) {
			return "Found";
		} else if(ele > m[i][j]) {
			i++;
		} else {
			j--;
		}
	}
	return "Not found";
}

int main() {
	int m[4][4] = {
	   {10,20,30,40},
	   {15,25,35,45},
	   {27,29,37,48},
	   {32,33,39,50}
	};
	int ele;
	cin>>ele;
	cout<<findElementInSortedMatrix(m, 4, ele);
}
