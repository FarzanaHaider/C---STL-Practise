#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int n,m;
    cin>>n>>m;
    string name,address;

    map<string,string>ip;
    for(int i=0;i<n;i++)
    {
        cin>>name>>address;
        ip[address]=name;
    }

    string query,add;

    while(m--)
    {
        cin>>query>>add;
        add.pop_back();

        cout<<query<<" "<<add<<"; #"<<ip[add]<<endl;
    }

}
