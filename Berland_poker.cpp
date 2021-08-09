#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(m==0)
        {
            cout<<0<<endl;
            continue;
        }
        int cards=n/k;
        if(m<=cards)
            cout<<m<<endl;
        else
        {
            int temp = cards-(m-cards)/(k-1);
            if((m-cards)%(k-1))
                temp--;
            cout<<temp<<endl;
        }
    }
    return 0;
}
