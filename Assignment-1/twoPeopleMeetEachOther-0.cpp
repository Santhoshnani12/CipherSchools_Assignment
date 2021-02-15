#include<bits/stdc++.h>
using namespace std;

bool twoPersonMeet(int x1,int x2,int v1, int v2) {
	if(x1 > x2 && v1>=v2) {
		return false;
	}
	if(x2 > x1 && v2 >= v1) {
		return false;
	}
	if((abs(x1-x2)) % (abs(v1-v2)) == 0) {
		return true;
	}
	return false;
}


int main() {
	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	bool res = twoPersonMeet(x1,x2,v1,v2);
	if(res) {
		cout<<"TRUE";
	} else {
		cout<<"FALSE";
	}
}
