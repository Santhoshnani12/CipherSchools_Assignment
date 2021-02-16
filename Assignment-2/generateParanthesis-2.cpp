#include<iostream>
using namespace std;

void balancePara(int l, int r, string s) {
	 if(l > r) {
            return;
        }

        if (l == 0 && r == 0) {
            cout<<s<<endl;
            return;
        }

        if (l > 0) {
            balancePara(l- 1, r, s + "(");
        }

        if (r > 0) {
            balancePara(l, r - 1, s + ")");

        }
}

int main() {
	int n;
	cin>>n;
	balancePara(n , n, "");
}
