#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    string s="",temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        s+=temp;
    }
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            count++;
    }
    cout<<count;
    return 0;
}
