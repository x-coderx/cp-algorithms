#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t, ans="";
    cin >> s>> t;
    int n = (s.size() < t.size()) ? s.size() : t.size();
    int a[26] = {0} , b[26] = {0};
    for(int i = 0; i < n; i++)
    {
        a[s[i]-'a']++;
        b[t[i]-'a']++;
        if(s[i]==t[i])
        {
            ans+=s[i];
            a[s[i]-'a']--;
            b[t[i]-'a']--;
        }
        else
        {
            if(a[t[i]-'a'])
            {
                a[t[i]-'a']--;
                ans+=t[i];
            }
            if(b[s[i]-'a'])
            {
                b[s[i]-'a']--;
                ans+=s[i];
            }
        }
    }
    cout<<ans;
    return 0;
}
