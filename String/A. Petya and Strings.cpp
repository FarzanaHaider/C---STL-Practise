// https://codeforces.com/contest/112/problem/A

#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++)
    {
        s1[i]=tolower(s1[i]);
    }

    for(int i=0;i<s2.size();i++)
    {
        s2[i]=tolower(s2[i]);
    }

    if(s1==s2)
        cout<<0;
    else if(s1<s2)
        cout<<-1;
    else cout<<1;

}
