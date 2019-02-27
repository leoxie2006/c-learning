#include<bits/stdc++.h>
using namespace std;
int main(){
	double h,s=0;
	cin>>h;
	s=h;
	for(int i=1;i<=10;i++)
	{
		h/=2;
		s+=2*h;
	}
	cout<<s<<"\n";
	printf("%g",h);
	return 0;
}


