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
        vector<long long> a(n), b(n);
        cin>>a[0];
        long long min_a=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(min_a>a[i])
                min_a=a[i];
        }
        cin>>b[0];
        long long min_b=b[0];
        for(int i=1;i<n;i++)
        {
            cin>>b[i];
            if(min_b>b[i])
                min_b=b[i];
        }
        long long count=0;
        for(int i=0;i<n;i++)
        {
            long long temp1 = a[i]-min_a , temp2 = b[i]-min_b;
            if(temp1>=temp2)
                count+=temp1;
            else
                count+=temp2;
        }
        cout<<count<<endl;
    }
    return 0;
}
