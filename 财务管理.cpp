#include<bits/stdc++.h>
using namespace std;
int main(){
	double b,a,s=0;
	for(int i=1;i<=12;i++)
	{
		cin>>a;
		s+=a;
	}
	b=s/12;
	printf("$%.2lf",b);
return 0;
}

