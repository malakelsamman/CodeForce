#include<bits/stdc++.h>

using namespace std;

void sol()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int prev[n];
    prev[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prev[i]=arr[i]+prev[i-1];
    }
    while(q--)
    {
        int z=sum;
        int l,r,k;
        cin>>l>>r>>k;
        int minus= (prev[r-1]-prev[l-1])+arr[l-1];
        z-=minus;
        z+=(k*((r-l)+1));
        if(z%2==0)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
