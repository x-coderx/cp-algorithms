#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long dp[61];
    dp[0]=0;
    for(long long i=1;i<61;i++)
    {
        dp[i]=dp[i-1]+pow(2,i)-1;
    }
    while(t--)
    {
        unsigned long long n,temp,ans=0;
        cin>>n;
        while(n)
        {
            temp=floor(log2(n+1));
            ans+=dp[temp];
            n = n-pow(2,temp)+1;
        }

        cout<<ans<<endl;
    }
    return 0;
}
