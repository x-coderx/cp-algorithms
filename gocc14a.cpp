#include<bits/stdc++.h>
using namespace std;
bool x[10001];
long long max_fun(int i, vector<int> a, vector< vector<int > >v)
{
    long long sum=a[i-1];
    x[i]=false;
    for(int j=0;j<v[i].size();j++)
    {
        if(x[v[i][j]])
        {
            sum=max(sum,sum+max_fun(v[i][j],a,v));
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<vector<int> >v(n+1);
    for(int i=1;i<n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        v[temp1].push_back(temp2);
        v[temp2].push_back(temp1);
    }
    long long ans=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        memset(x,true,sizeof(x));
        long long temp=max_fun(i,a,v);
        if(temp>ans)
            ans=temp;
    }
    cout<<ans;
    return 0;
}
