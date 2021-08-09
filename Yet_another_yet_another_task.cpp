#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0,max=a[0],maxsum=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=sum+a[i])
        {
            sum=a[i];
            max=a[i];
        }
        else
        {
            sum=sum+a[i];
            if(max<a[i])
                max=a[i];
        }
        if(sum>maxsum)
            maxsum=sum;
    }
    cout<<sum-max;
    return 0;
}
