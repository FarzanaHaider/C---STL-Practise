#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;

        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        unique(v.begin(),v.end());

        int sz = unique(v.begin(),v.end())-v.begin();

        if(sz==x)
            cout<<"Good"<<endl;
        else if(sz<x)
            cout<<"Bad"<<endl;
        else
            cout<<"Average"<<endl;
    }
}
