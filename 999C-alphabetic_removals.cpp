#include<bits/stdc++.h>
#include<iostream>


using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int start='a'; //97
    int end = 'z';
    for(int i=start;i<=end;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(k==0)
            break;
            if(s[j]==i)
            {
                s[j]=' ';
                k--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
        cout<<s[i];
    }


}