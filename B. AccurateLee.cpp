#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int k;
         cin>>k;
         string s;
         cin>>s;
         int i=0,j=k-1;
         while(i<k && s[i]=='0')
            i++;
         while(j>=0 && s[j]=='1')
            j--;
         if(i+1==j
            )
            cout<<s<<endl;
         else
            cout<<s.substr(0,i)+'0'+s.substr(j)<<endl;
     }
     return 0;
 }
