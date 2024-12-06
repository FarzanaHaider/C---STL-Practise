#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int m,n;
    cin>>m>>n;

    priority_queue<int>q;

    int x;
    while(m--)
    {
        cin>>x;
        q.push(x);
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(!q.empty())
        {
            int a = q.top();
            q.pop();

            ans+=a;
            a--;

            if(a>0) q.push(a);
        }
    }

    cout<<ans;

}
