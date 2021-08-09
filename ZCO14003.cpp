#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        vector<long long> x(n);
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        sort(x.begin(),x.end());
        long long max=x[0]*n;
        for(int i=1;i<n;i++)
        {
            if(x[i]*(n-i)>max)
                max=x[i]*(n-i);
        }
        cout<<max<<endl;
    return 0;
}
