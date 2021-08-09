#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26]={0},flag=0;
    for(int i=0;i<s.size();i++)
        a[s[i]-97]++;
    for(int i=0;i<26;i++)
        if(a[i])
            flag++;
    if(flag%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
