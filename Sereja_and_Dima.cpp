#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int t=0,x=0,y=n-1,s=0,d=0;
    while(x<=y)
    {
        int temp;
        if(a[x]>a[y])
        {
            temp=a[x];
            x++;
        }
        else
        {
            temp=a[y];
            y--;
        }
        if(t%2==0)
            s+=temp;
        else
            d+=temp;
        t++;
    }
    cout<<s<<" "<<d;
    return 0;
}
