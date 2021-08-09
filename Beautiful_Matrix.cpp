#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        int flag=0,j;
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j])
            {
                flag++;
                break;
            }
        }
        if(flag)
        {
            cout<<abs(2-i)+abs(2-j);
            break;
        }
    }
	return 0;
}
