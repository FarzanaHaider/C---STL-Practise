#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    set<int>s;

    int q;
    cin>>q;

    while(q--)
    {
        pair<int,int>p;

        cin>>p.first>>p.second;

        if(p.first==1)
            s.insert(p.second);
        else if(p.first==2)
        {
            if(s.empty()==0)
                s.erase(p.second);

        }
        else
        {
            if(s.count(p.second)==1)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }

}
