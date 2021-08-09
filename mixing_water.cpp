#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long double h,c,t,sum=0,b=0,dif=INT_MAX;
        cin>>h>>c>>t;
        int ans,flag=0;
        for(int i=1;i<INT_MAX;i++)
        {
            if(i%2)
                sum+=h;
            else
                sum+=c;
            b=sum/(double)i;
            if(dif>=abs(b-t))
            {
                dif=abs(b-t);
                ans=i;
            }
            else
            {
                flag++;
                if(flag==2)
                    break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
