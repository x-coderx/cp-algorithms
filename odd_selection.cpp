#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],o=0,e=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
                o++;
            else
                e++;
        }
        if(x==n)
        {
            if(o%2==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            if(o==0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else if(e==0 && x%2==0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
