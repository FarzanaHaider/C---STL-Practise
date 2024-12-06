#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n,d;
        cin>>n>>d;

        map<pair<int,int>,bool>vis;
        int done = 1;

        int a,b;
        while(d--)
        {
            cin>>a>>b;
            if(vis[{a,b}]==1) done=0;
            vis[{a,b}]=1;
        }

        if(done==0) cout<<"Scenario #"<<i<<": impossible"<<endl;
        else cout<<"Scenario #"<<i<<": possible"<<endl;
    }

    return 0;
}
