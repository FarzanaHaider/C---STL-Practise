#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int n;
    cin>>n;

    vector<int>v(n);
    map<int,int>f;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        f[v[i]]++;
    }

    int ans=0;

    for(auto u:f)
    {
        ans=max(ans,u.second);
    }

    cout<<ans;

}