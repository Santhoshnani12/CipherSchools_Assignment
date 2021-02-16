#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int equalPartition(int n, int a[])
    {
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=a[i];
        
        if(sum%2==1)
        return 0;
        
        int v=sum/2;
        
        bool dp[n+1][v+1];
        
        memset(dp,false,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        dp[i][0]=true;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=v;j++)
            {
                if(a[i-1]>j)
                dp[i][j]=dp[i-1][j];
                
                else dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
            }
        }
        
        return dp[n][v];
        
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  
