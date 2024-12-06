// https://www.hackerearth.com/problem/algorithm/the-palindrome-2/

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
        string s,tmp;
        cin>>s;

        tmp = s;

        reverse(s.begin(),s.end());

        if(s == tmp)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

}
