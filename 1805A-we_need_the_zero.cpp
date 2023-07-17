#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int ans=0;
        for(auto &it:v)
        {
            cin>>it;
            ans^=it;
        }
        if(n%2==0)
        {
            if(ans==0)
            cout<<1<<endl;
            else
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}