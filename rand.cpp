#include <bits/stdc++.h>
using namespace std;
int ran(int a,int b)
{
	return a+rand()%(b-a+1);
}
int main()
{
	int a,b;
	cin>>a>>b;
	set<int> used;
	for(int i=a;i<=b;i++)
	{
		int x;
		do
		{
			x=ran(a,b);
		}
		while(used.count(x));
		used.insert(x);
		cout<<x<<endl;
	}
	return 0;
}
