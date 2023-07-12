#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i]==s[j])
            {
                if((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0))
                {
                    cout<<"no"<<endl;
                    return;
                }
            }
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
        solve();
    }
}