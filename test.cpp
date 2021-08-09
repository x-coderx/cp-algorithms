#include<bits/stdc++.h>
using namespace std;
int main()
{
    int br, bl, n, m;
    cin >>n >>m;
    br =-1;
    bl = n+m+1;
    while(br<bl)
    {
        int bm = br + bl >>1;
        cout <<bm<<endl;
    }
    return 0;

}
