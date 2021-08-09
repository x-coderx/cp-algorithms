#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b)
{
    if(a<=0 || b<=0 || (a==1 && b==1))
        return 0;
    return max(1+fun(a-2,b-1),1+fun(a-1,b-2));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<fun(a,b)<<endl;
    }
    return 0;
}
