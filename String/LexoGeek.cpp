// https://www.hackerearth.com/problem/algorithm/lexogeek-e6450fb7/

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
        string w;
        cin>>w;

        if(next_permutation(w.begin(),w.end()))
        {
            cout<<w<<endl;
        }
        else cout<<"no answer"<<endl;
    }

}
