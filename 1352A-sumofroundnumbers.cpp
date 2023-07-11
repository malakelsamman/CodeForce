#include <bits/stdc++.h>

using namespace std;

void sol(int x)
{
    vector<int> v;
    vector <int> v1={1,10,100,1000,10000};
    for(auto i:v1)
    {
        int z =x%10;
        x/=10;
        if(z==0)
        continue;
        v.push_back(z*i);
    }
    cout<<v.size()<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        sol(x);
    }
}