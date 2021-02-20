#include <bits/stdc++.h>
using namespace std;



vector <int> max_of_subarrays(int *a, int n, int k){
    vector<int>r;
    deque<int>d;
    for(int i=0;i<k;i++) {
		while(!d.empty() && a[i] >= a[d.back()]) {
			d.pop_back();
		}
		d.push_back(i);
	}
	for(int i=k;i<n;i++) {
		r.push_back(a[d.front()]);
		while(!d.empty() && d.front() <= i-k) {
			d.pop_front();
		}
		while(!d.empty() && a[i] >= a[d.back()]) {
			d.pop_back();
		}
		d.push_back(i);
	}
	r.push_back(a[d.front()]);
    return r;

}



int main() {

	int t;
	cin >> t;

	while(t--){

	    int n, k;
	    cin >> n >> k;

	    int arr[n];
	    for(int i = 0;i<n;i++)
	        cin >> arr[i];

	    vector <int> res = max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	    cout << endl;

	}

	return 0;
}
