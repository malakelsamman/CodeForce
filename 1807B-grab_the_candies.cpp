#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int n;
    cin>>n;
    int arr[n];
    int sumeven=0,sumodd=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            sumeven+=arr[i];
        }
        else
        {
            sumodd+=arr[i];
        }

    }
    if(sumeven>sumodd)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
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