#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,updated,ans;
	
	
	int t;
	cin>>t;
	while(t--)
	{
		
	
	
	 cin>>n;
	 
	 if(n%2==0)
	 {
	 	
	 	n=n/2;
	 	
	 	cout<<n*n<<endl;
	 }
	 else
	 {
	 	
	 
	 
	 ans=(n/2);
	 
	 
	 updated=n-ans;
	 cout<<updated*ans<<endl;
	 

     }
	 
}
	 
}
