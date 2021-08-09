#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        vector<int> a(n);
        int x[101]={0};
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            x[temp]++;
        }
        for(int sum=1;sum<=100;sum++)
        {
            int count=0;
            for(int i=1;i<=sum;i++)
                count+=min(x[i],x[sum-i]);
            ans = max(ans,count/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
