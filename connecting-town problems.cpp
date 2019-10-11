#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	long long int ans=1;
	cin>>t;
	while(t--)
	{
		
		
		long long int n;
		cin>>n;
		
		for(int i=1;i<n;i++)
		{
			int a;
			cin>>a;
			
			ans=ans*a;
			ans=(ans%1234567);
			
		}
		cout<<ans<<endl;
		ans=1;
	}
}
