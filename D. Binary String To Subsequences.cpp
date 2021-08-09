#include<bits/stdc++.h>
using namespace std;
int getflag(char x)
{
    int flag=0;
    if(x=='1')
        flag++;
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=1;
        int x[n];
        memset(x,0,sizeof(x));
        for(int i=0;i<n;i++)
        {
            if(x[i])
                continue;
            x[i]=count;
            char z=s[i];
            int flag=getflag(z);
            for(int j=i+1;i<n;j++)
            {
                char w = s[j];
                if(!x[j] && flag^getflag(w))
                {
                    x[j]=count;
                    flag=getflag(w);
                }
            }
            count++;
        }
        int max_x=0;
        for(int i=0;i<n;i++)
        {
            if(max_x<x[i])
                max_x=x[i];
        }
        cout<<max_x<<endl;
        for(int i=0;i<n;i++)
            cout<<x[i]<<" ";
        cout<<endl;
    }
    return 0;
}
