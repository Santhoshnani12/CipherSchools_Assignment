#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int st[n];
    st[n-1] = -1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
            st[i] = i+1;
        else
        {
            int j = i+1;
            while(j!=-1 && st[j]!=-1 && arr[i]>arr[st[j]])
               j = st[j];
            if(st[j] == -1)
                st[i] = -1;
            else
                st[i] = st[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(st[i] == -1)
            cout<<"-1 ";
        else
            cout<<arr[st[i]]<<" ";
    }
    cout<<"\n";
    }
    return 0;
}
