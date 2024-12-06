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

    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<int>q;

        ll x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            ll y=-1*x;
            q.push(y);
        }

        ll ans=0;
        while(q.size()>1)
        {
            ll a1=-1*q.top();
            q.pop();

            ll a2=-1*q.top();
            q.pop();

            ans+=a1+a2;
            q.push(-1*(a1+a2));
        }

        cout<<ans<<endl;
    }

}
