#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    set<int>s;
    int n;
    cin>>n;

    int x;
    cin>>x;

    while(x--)
    {
        int a;
        cin>>a;
        s.insert(a);
    }

    int y;
    cin>>y;

    while(y--)
    {
        int b;
        cin>>b;
        s.insert(b);
    }

    if(s.size()==n)
        cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

}
