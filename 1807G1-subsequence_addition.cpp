#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
void sol()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]!=1)
    {
        cout<<"no"<<endl;
        return;
    }
    int sum=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=sum)
        {
            sum+=arr[i];
                
        }
            else
        {
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
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