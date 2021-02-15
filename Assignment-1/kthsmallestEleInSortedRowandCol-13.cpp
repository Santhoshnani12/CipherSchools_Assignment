#include <iostream>  //solved by Abhishek Ranjan (VIT,Vellore)
#include<bits/stdc++.h>
using namespace std;
struct node{
   int val;
   int r;
   int c;
};
void min_heap(struct node heap[], int index , int c)
{
    int smallest = index;
    int left =  2*index+1;
    int right = 2*index+2;
    if(left< c && heap[smallest].val > heap[left].val )
    smallest = left;
    if(right < c && heap[smallest].val > heap[right].val)
    smallest = right;
    if(smallest!=index)
    {
        swap(heap[smallest],heap[index]);
        min_heap(heap,smallest,c);
    }
}
void build_heap(struct node heap[] , int c)
{
    for(int i=c/2;i>=0;i--)
    {
        min_heap(heap,i,c);
    }
}
int ksmallest(int a[][10],int r,int c,int k)
{
     int res = -1;
    struct node heap[c];
    for(int i=0;i<c;i++)
    {
        heap[i] = {a[0][i],0,i};
    }
    
    build_heap(heap,c);
    while(k--)
    {
        struct node temp = heap[0];
        res = temp.val;
        if(temp.r<r-1)
        {
            heap[0].val = a[temp.r+1][temp.c];
        }
        else
        heap[0].val = INT_MAX;
        heap[0].r = temp.r+1;
        heap[0].c = temp.c;
        min_heap(heap,0,c);
    }
    return res;
}
int main()
{
  int n,m,k;
  int a[10][10];
  cin>>n>>m>>k;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          cin>>a[i][j];
      }
  }
 int k_smallest  = ksmallest(a,n,m,k);
 cout<<"Kth smallest element is:  "<<k_smallest;
 return 0;
}

