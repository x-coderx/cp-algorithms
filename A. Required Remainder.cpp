#include<bits/stdc++.h>
using namespace std;
 int main()
 {

     int t;
     cin>>t;
     while(t--)
     {
         int x,y,n;
         cin>>x>>y>>n;
         int curr=n%x;
         if(curr==y)
            cout<<n<<endl;
         else if(curr>y)
            cout<<n-curr+y<<endl;
         else
            cout<<n-x-curr+y<<endl;
     }
     return 0;
 }
