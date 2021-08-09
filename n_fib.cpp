#include<bits/stdc++.h>
using namespace std;
pair<int,int> fib(int n)
{
    if(n==0)
        return {0,1};
    auto p = fib(n>>1);
    int a = p.first*(2*p.second - p.first);
    int b = p.first*p.first + p.second*p.second;
    if(n&1)
        return {b,a+b};
    else
        return {a,b};
}

int main()
{
    int n;
    cin>>n;
    auto p = fib(n);
    cout<<p.first;
    return 0;
}
