#include<bits/stdc++,h>
using namespace std;
int cmp(string s1, string s2)
{
    int temp=0;
    for(int i=0; i<s.size(); i++)
        if(s1[i]!=s2[i])
            temp++;
    return temp;
}
int main()
{
    string b,e;
    cin>>b>>e;
    int n,count=0;
    cin>>n;
    vector<string> v;
    v.push_back(b);
    for(int i=0;i<n;i++)
    {
        string t;
        cin>>t;
        v.push_back(t);
    }
    v.push_back(e);
    bool visited[n+2];
    memset(visited,false,sizeof(visited));
    vector<vector<string> > dp(n+2);
    for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<n+2;j++)
        {
            if(cmp(v[i],v[j])==1)
                dp[i].push_back(v[j]);
        }
    }
    for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<dp[i].size();j++)
        {

        }
    }
}
