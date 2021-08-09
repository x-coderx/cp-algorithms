#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string temp = (n%4==0)?"YES":"NO";
        cout<<temp<<endl;
    }
    return 0;
}
