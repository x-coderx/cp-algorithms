// solution is not correct and also in O(n3) so convert the following solution in dp where complexity lies in O(n2)
#include<bits/stdc++.h>
using namespace std;
string s,t;
int rotate(int a, int b)
{
    char x=s[b];
    for(int i=b;i>a;i--)
    {
        s[i]=s[i-1];
    }
    s[a]=x;
    return 0;
}
int main()
{
    int z;
    cin>>z;
    while(z--)
    {
        int n;
        cin>>n;
        cin>>s>>t;
        int x[26]={0};
        for(int i=0;i<n;i++)
        {
            x[s[i]-97]++;
            x[t[i]-97]--;
        }
        int flag=0;
        for(int i=0;i<26;i++)
            if(x[i])
                flag++;
        if(flag)
        {
            cout<<-1<<endl;
            continue;
        }
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(t[i]==s[i])
                continue;
            for(int j=0;j<i;j++)
            {
                if(t[i]==s[j])
                {
                    count++;
                    rotate(i,j);
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
