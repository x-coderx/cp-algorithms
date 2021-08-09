#include<bits/stdc++.h>
using namespace std;

long long bigpow_mod(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while(b)
    {
        if(b&1)
        {
            res = (res * a) % m;
        }
        a = a*a%m;
        b>>=1;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        long long m =10;
        cin>>a>>b;
        cout<<bigpow_mod(a,b,m)<<endl;
    }
    return 0;
}
