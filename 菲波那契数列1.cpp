#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,i;
	long k1=1,k2=1,k3;
	cin>>k;
	for(int i=k;i>2;i--)
	{
	k3=k1+k2;
	k1=k2;
	k2=k3;
	}
	if(k>2)
	cout<<k3<<endl;
	else
	cout<<"1"<<endl; 
	return 0;
}
