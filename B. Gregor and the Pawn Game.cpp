#include<bits/stdc++.h>
using namespace std;

int max_pawns(string s1, string s2, int i, int n)
{
        if(i>=n)
            return 0;
        if(s2[i]=='0')
            return max_pawns(s1,s2,i+1,n);
        if(i==0)
        {
            if(s1[0]=='0')
                return 1+max_pawns(s1,s2,i+1,n);
            if(s1[1]=='1')
            {
                s1[1]='0';
                return 1+max_pawns(s1,s2,i+1,n);
            }
            else
                return max_pawns(s1,s2,i+1,n);
        }

        else if(i==n-1)
        {
            if(s1[n-1]=='0')
                return 1+max_pawns(s1,s2,i+1,n);
            if(s1[n-2]=='1')
            {
                s1[n-2]='0';
                return 1+max_pawns(s1,s2,i+1,n);
            }
            else
                return max_pawns(s1,s2,i+1,n);
        }

        else
        {
            if(s1[i]=='0')
                return 1+max_pawns(s1,s2,i+1,n);
            if(s1[i-1]=='1')
            {
                s1[i-1]='0';
                return 1+max_pawns(s1,s2,i+1,n);
            }

            if(s1[i+1]=='1')
            {
                s1[i+1]='0';
                return 1+max_pawns(s1,s2,i+1,n);
            }

            return max_pawns(s1,s2,i+1,n);
        }

    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        int n;
        cin>>n;
        cin>>s1>>s2;
        cout<<max_pawns(s1,s2,0,n)<<endl;
    }
    return 0;
}
