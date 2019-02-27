#include<bits/stdc++.h>
using namespace std;
int main(){
	int b=0,n,a,s=0;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cin>>a;
		s+=a;
	}
	cout<<(n-2)*180-s;
return 0;
}

