#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > v(1001);
int fun(int x,int n)
{
    if(x>n)
        return 0;
    if(v[x].size()==1)
        return 1;
    int sum=v[x].size();
    for(int j=0;j<v[x].size();j++)
    {
            sum+=fun(v[x][j],n);
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x;
        for(int i=0;i<n-1;i++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int sum=fun(x,n);

        if(sum%2)
            cout<<"Ayush"<<endl;
        else
            cout<<"Ashish"<<endl;
    }
    return 0;
}
