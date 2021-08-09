#include<bits/stdc++.h>
using namespace std;
bool compare(vector<int> v1, vector<int> v2)
{
    return (v1.size()<v2.size());
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> g(v);
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        if(g[a].size()==0)
            g[a].push_back(a);
        g[a].push_back(b);
    }
    sort(g,g+v,compare);

}
