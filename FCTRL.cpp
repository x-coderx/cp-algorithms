#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long x,count=0;
        cin>>x;
        while(x)
        {
            x/=5;
            count+=x;
        }
        cout<<count<<endl;
    }
    return 0;
}
