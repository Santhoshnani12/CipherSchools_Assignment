#include<iostream>
using namespace std;

void spiral(int a[][4], int r, int c) {
	int i, k = 0, l = 0;
	while(k < r && l < c) {
		for(int i=l;i<c;i++) {
			cout<<a[k][i]<<" ";
		}
		k++;
		for(int i=k;i<r;i++) {
			cout<<a[i][c-1]<<" ";
		}
		c--;
		if(k <r) {
			for(int i=c-1;i>= l;i--) {
				cout<<a[r-1][i]<<" ";
			}
		}
		r--;
		if(l<c) {
			for(int i=r-1;i>=k;i--) {
				cout<<a[i][l]<<" ";
			}
		}
		l++;
	}
}

int main() {
	int a[3][4] = { { 1, 2, 3, 4 },
                    { 7, 8, 9, 10 },
                    { 13, 14, 15, 16 } };
	spiral(a,3,4);
}
