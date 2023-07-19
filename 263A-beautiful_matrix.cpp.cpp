#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5];
    int ans=0;
    int a,b;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            a=i,b=j;
            
        }
    }
    if(a>2)
    {
        while(a>2)
        {
            a--;
            ans++;
        }
    }
    else
    {
        while(a<2)
        {
            a++;
            ans++;
        }

    }        
    if(b>2)
    {
        while(b>2)
        {
            b--;
            ans++;
        }
    }
    else
    {
        while(b<2)
        {
            b++;
            ans++;
        }

    }
    cout<<ans<<endl;
}