#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min=INT_MAX;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            count++;
        else
        {
            if(count<min)
                min=count;
            count=0;
        }
    }
    if(count<min)
        min=count;
    cout<<min;
    return 0;
}
