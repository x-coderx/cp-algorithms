#include<bits/stdc++.h>
using namespace std;
int d1,d2,d3,d4;
long long x,y,n,m;
long long checkpoint(int dir,long long curr,long long x)
{
    if(curr==x)
        dir=1;
    else if(curr==0)
        dir=0;
    if(dir==1)
        curr--;
    else if(dir==0)
        curr++;
    return curr;
}
bool check(long long a, long long b, pair<long long ,long long> p)
{
    if(a==p.first && b==p.second)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a=1,b=1,flag=1;
        cin>>n>>m>>x>>y;
        pair<long long,long long> p1,p2,p3,p4;
        p1=make_pair(x,y);
        p2=make_pair(x,y);
        p3=make_pair(x,y);
        p4=make_pair(x,y);
        d1=1;
        d2=1;
        d3=0;
        d4=0;
        for(long long i=1;i<m;i++)
        {
            b++;
            p1.second=checkpoint(d1,p1.second,m);
            p2.first=checkpoint(d2,p2.first,n);
            p3.second=checkpoint(d3,p3.second,m);
            p4.first=checkpoint(d4,p4.first,n);
            if(check(a,b,p1))
            {
                flag--;
                break;
            }
            if(check(a,b,p2))
            {
                flag--;
                break;
            }
            if(check(a,b,p3))
            {
                flag--;
                break;
            }
            if(check(a,b,p4))
            {
                flag--;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"BestWishes"<<endl;
            continue;
        }

        flag=1;
        for(long long i=1;i<n;i++)
        {
            a++;
            p1.second=checkpoint(d1,p1.second,m);
            p2.first=checkpoint(d2,p2.first,n);
            p3.second=checkpoint(d3,p3.second,m);
            p4.first=checkpoint(d4,p4.first,n);
            if(check(a,b,p1))
            {
                flag--;
                break;
            }
            if(check(a,b,p2))
            {
                flag--;
                break;
            }
            if(check(a,b,p3))
            {
                flag--;
                break;
            }
            if(check(a,b,p4))
            {
                flag--;
                break;
            }
        }
        if(flag!=0)
            cout<<"Farewell"<<endl;
        else
            cout<<"BestWishes"<<endl;
    }
    return 0;
}
