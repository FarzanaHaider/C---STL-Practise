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
    vector<string>v(n);

    map<string,int>cnt;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(cnt[v[i]]==0)
            cout<<"OK"<<endl;
        else
        {
            cout<<v[i]<<cnt[v[i]]<<endl;
        }
        cnt[v[i]]++;
    }

}
