#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<v.size();i++)
    {
        int temp=1,temp2=v[i];
        if(temp2!=temp)
        {
            while(temp<temp2)
            {
                v.insert(v.begin()+i,temp);
                temp++;
                i++;
            }
        }
    }
    int sum=0,t=v.size();
    for(int i=0;i<t;i++)
    {
        v.push_back(v[i]);
    }
    for(int i=0;i<x;i++)
        sum+=v[i];
    int temp=sum;
    for(int i=x;i<v.size()/2;i++)
    {
        temp=temp+v[i]-v[i-x];
        if(temp>sum)
            sum=temp;
    }
    cout<<sum<<endl;
    return 0;
}
