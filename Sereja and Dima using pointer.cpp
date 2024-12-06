#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    opt();
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l=0,r=n-1;
    int f=1;
    int s=0,d=0;

    while(l<=r)
    {
        if(f==1)
        {
            if(v[l]>v[r])
            {
                s+=v[l];
                l++;
            }
            else
            {
                s+=v[r];
                r--;
            }
            f=2;
        }
        else
        {
            if(v[l]>v[r])
            {
                d+=v[l];
                l++;
            }
            else
            {
                d+=v[r];
                r--;
            }
            f=1;
        }
    }

    cout<<s<<" "<<d;

}
