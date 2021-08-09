#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::toupper);
    transform(b.begin(),b.end(),b.begin(),::toupper);
    int temp = a.compare(b);
    if(temp<0)
        cout<<-1;
    else if(temp>1)
        cout<<1;
    else
        cout<<temp;
	return 0;
}
