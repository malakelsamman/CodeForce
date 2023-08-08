#include<bits/stdc++.h>

using namespace std;

int n;
string s;
void reverse(string &str,int n,int i)
{
    if(n<=i)
    return;
    swap(str[i],str[n]);
    reverse(str,n-1,i+1);

}

int main()
{
    cin>>n>>s;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(--i);
            i++;
        }
        
    }

    for(auto i:v)
    {
        reverse(s,i,0);
    }

    cout<<s<<endl;

}