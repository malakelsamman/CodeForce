#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+5;
long long n, c;
long long arr[N];

long long solve(long long w)
{
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=((2*w+arr[i])*(2*w+arr[i]));
        if(sum>c)
        {
            return c+5;
        }
    }
    return sum;
}

long long binarysearch()
{
    long long l=0,r=1e9,m;
    while(l<=r)
    {
        m=(l+r)/2;
        long long rr= solve(m);
        if(rr==c)
        return m;
        if(rr<c)
        l=m+1;
        else
        r=m-1;
    }
    return -1;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long res=binarysearch();
        cout<<res<<endl;
    }

}