#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	double s=1,n=2;
	cin>>k;
	while(s<=k)
	{
		s=s+1/n;
		n++;
	} 
	n=n-1;
	cout<<n;
	return 0;
}

