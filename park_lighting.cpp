#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        cout<<(n/2)*m+(n%2)*((m/2)+(m%2))<<endl;
    }
    return 0;
}
