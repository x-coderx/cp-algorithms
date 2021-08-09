#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long granny=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=granny)
                granny++;
            else
            {
                long long temp=0;
                while(i<n)
                {
                    if(granny+temp>=a[i])
                    {
                        granny=granny+temp+1;
                        break;
                    }
                    temp++;
                    i++;
                }
            }
        }
        cout<<granny<<endl;
    }
    return 0;
}
