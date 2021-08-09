#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n,sum=0;
 	cin>>n;
 	for(int i=0;i<=n;i++)
 	{
 		string s;
 		getline(cin,s);
 		int temp=0;
 		for(int j=0;j<s.size();j+=2)
 		{
 			if(s[j]=='1')
 			{
 				if(++temp==2)
 					break;
 			}
 		}
 		if(temp==2)
 			sum++;
 	}
 	cout<<sum;
 	return 0;
 }
