#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    opt();
    int n,a;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int s=0,d=0,f=1;

    while(!v.empty())
    {
        if(f==1)
        {
            if(*v.begin()>v.back())
            {
                s+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                s+=v.back();
                v.pop_back();
            }
            f=2;
        }
        else
        {
            if(*v.begin()>v.back())
            {
                d+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                d+=v.back();
                v.pop_back();
            }
            f=1;
        }
    }

    cout<<s<<" "<<d;

}
