#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int h[26]={0};
        for(int i=0;i<s.length()/2;i++)
        {
            h[s[i]-97]++;
            h[s[s.length()-i-1]-97]--;
        }
        int flag=1;
        for(int i=0;i<26;i++)
        {
            if(h[i])
            {
                flag--;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
    }
    return 0;
}
