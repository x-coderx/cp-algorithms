#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0;
        cin>>n>>m;
        int a[n+m-1],b[n+m-1];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                if(x)
                    a[i+j]++;
                else
                    b[i+j]++;
            }
        }
        for(int i=0,j=n+m-2;i<j;i++,j--)
        {
            c+=min(a[i]+a[j],b[i]+b[j]);
        }
        cout<<c<<endl;
    }
    return 0;
}
