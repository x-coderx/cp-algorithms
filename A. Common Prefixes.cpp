#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=-1;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(m<v[i])
                m=v[i];
        }
        m++;
        int count=1;
        string prev = string(m,'a');
        cout<<prev<<endl;
        for(int i=0;i<n;i++)
        {
            prev = prev.substr(0,v[i])+string(m-v[i],(char)('a'+(count++)%25));
            cout<<prev<<endl;
        }
    }
    return 0;
}
