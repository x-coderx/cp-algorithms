#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int three=0,two=0;
        int temp=n;
        while(temp%3==0)
        {
            three++;
            temp/=3;
        }
        while(temp%2==0)
        {
            two++;
            temp/=2;
        }
        if(temp>1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(three>=two)
            cout<<2*three-two<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
