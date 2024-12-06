#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

bool isbalanced(char c1,char c2)
{
    return (c1=='(' && c2==')') || (c1=='{' && c2=='}') || (c1=='[' && c2==']');
}

int main()
{
    opt();
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        stack<char>st;
        bool done=1;

        for(auto u:s)
        {
            if(u=='(' || u =='{' || u == '[')
                {
                    st.push(u);
                }
            else
            {
                if(st.empty())
                {
                    done=0;
                    break;
                }

                else
                {
                    if(isbalanced(st.top(),u))
                    {
                        st.pop();
                    }
                    else
                    {
                        done = 0;
                        break;
                    }
                }
            }
        }

        if(!st.empty()) done=0;

        if(done) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
