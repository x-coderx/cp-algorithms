#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int count=1,min=v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i]>v[i-1])
                v[i]=min;
            else
            {
                min=v[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
