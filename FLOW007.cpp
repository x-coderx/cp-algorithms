#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        while(x%10==0)
            x/=10;
        while(x)
        {
            cout<<x%10;
            x/=10;
        }
        cout<<endl;
    }
    return 0;
}
