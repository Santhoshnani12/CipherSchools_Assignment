#include<bits/stdc++.h>

using namespace std;


void max_area(int arr[],int n)
{
    int v1[n],v2[n];
    stack<int>st;
    st.push(0);
    v1[0]=-1;
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && arr[i] < arr[st.top()])
            st.pop();
        if(st.empty())
            v1[i] = -1;
        else
            v1[i] = st.top();
        st.push(i);
    }
    while(!st.empty())
        st.pop();
    reverse(arr,arr+n);
    st.push(0);
    v2[0]=n;
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && arr[i] < arr[st.top()])
            st.pop();
        if(st.empty())
            v2[i] = n;
        else
            v2[i] = st.top();
        st.push(i);
    }
    reverse(arr,arr+n);
    reverse(v2,v2+n);
    for(int i=0;i<n;i++)
        if(v2[i] != n)
            v2[i] = n-v2[i]-1;
    int maxx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int val = v2[i]-v1[i]-1;
        if(maxx < arr[i]*val)
            maxx = arr[i]*val;
    }
    cout << maxx;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    max_area(arr,n);
	    cout << "\n";
	}
	return 0;
}
