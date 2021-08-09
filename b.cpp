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
        int a[n],x[1024]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            x[a[i]]++;
        }
        int ans=-1;
        for(int i=1;i<1024;i++)
        {
            int temp[1024];
            copy(x,x+1024,temp);
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(temp[i^a[j]])
                    temp[i^a[j]]--;
                else
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
