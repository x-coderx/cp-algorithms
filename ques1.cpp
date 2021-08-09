#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,temp,sum=0;
	cin>>n>>h;
	while(n--)
	{
		cin>>temp;
		if(temp>h)
			sum+=2;
		else
			sum++;
	}
	cout<<sum;
	return 0;
}