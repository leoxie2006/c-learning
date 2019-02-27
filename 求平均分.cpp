#include<bits/stdc++.h>
using namespace std;
int main(){
	double a=0,b,s=1,r=1;
	
	while(a!=-1)
	{
		cin>>a;
		s=s+a;
		r++;
	}
	 
	b=s/r;
	cout<<b;
	return 0;
}

