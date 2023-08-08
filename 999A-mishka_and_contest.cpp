#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0,j=n-1;
    while(i<n)
    {
        if(v[i]<=k)
        {
            cnt++;
            i++;
            continue;
        }
        if(v[j]<=k)
        {
            cnt++;
            j--;
            continue;
        }
        break;

    }
    cout<<cnt;
   


}