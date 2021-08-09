#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         string a,b;
         cin>>a>>b;
         vector< vector<int> > v(26);
         for(int i=0;i<n;i++)
         {
             v[a[i]-97].push_back(i);
         }
         int flag=0,count=0;
         for(int i=0;i<n;i++)
         {
             if(a[i]!=b[i])
             {
                 int temp = a[i]-97;
                 for(int j=v[temp].size()-1;v[temp][j]>=i;j--)
                 {
                    if(b[i]>a[i])
                    {
                        a[i]=b[i];
                        v[b[i]-97].push_back(v[temp][j]);
                        v[temp].pop_back();
                        count++;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                 }
             }
             if(flag)
                break;
         }
         if(flag)
            cout<<-1<<endl;
         else
            cout<<count<<endl;
     }

     return 0;
 }
