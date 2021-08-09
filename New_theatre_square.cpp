#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char a[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        int sum=0;
        if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i][0]=='.')
                    sum+=x;
            }
            cout<<sum<<endl;
            continue;
        }
        if(2*x<y)
            y=2*x;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int count=0;
                while(j<m && a[i][j]=='.')
                {
                    count++;
                    j++;
                }
                sum=sum+(count/2)*y+(count%2)*x;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
