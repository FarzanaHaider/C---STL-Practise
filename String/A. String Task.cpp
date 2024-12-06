// https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

bool isVowel(char c)
{
    return (c =='a' || c =='o' || c =='y' || c =='e' || c =='u' || c =='i');
}

int main()
{
    opt();
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        s[i] = tolower(s[i]);

        if(isVowel(s[i]))
        {
            continue;
        }
        else
        {
            cout<<"."<<s[i];
        }
    }

}
