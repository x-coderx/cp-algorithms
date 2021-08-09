#include<bits/stdc++.h>
using namespace std;
long long bigpow_mod(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b) {
        if (b & 1)
            res = ((res%m) * a) % m;
        a = a * a % m;
        b >>= 1;
    }
    return res%m;
}
int main()
{
    long long n,k;
    while(cin>>n>>k)
    {
        if(n<2 || k<1)
        {
            continue;
        }
        long long m = 10000007;
        long long mod = (((2*bigpow_mod(n-1,k,m) + 2*bigpow_mod(n-1,n-1,m) + bigpow_mod(n,k,m) + bigpow_mod(n,n,m))%m) + m ) %m;
        cout<<mod<<endl;
    }
    return 0;
}
