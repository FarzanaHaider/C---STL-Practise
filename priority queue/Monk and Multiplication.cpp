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

    priority_queue<int>q;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)
    {
        q.push(v[i]);
        if(q.size()>=3)
        {
            int a1=q.top();
            q.pop();

            int a2=q.top();
            q.pop();

            int a3=q.top();

            cout<< 1LL*a1*a2*a3 <<endl;

            q.push(a1);
            q.push(a2);
        }
        else
            cout<<-1<<endl;
    }

}
