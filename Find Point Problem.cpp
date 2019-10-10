#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long int px,py,qx,qy,rx,ry;
		
		
		cin>>px>>py>>qx>>qy;
		
		rx=qx-px;
		ry=qy-py;
		cout<<rx+qx<<endl;
		cout<<ry+qy<<endl;
	}
}
