#include<bits/stdc++.h>
using namespace std;
int main(){
	double s=0,a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},b[9];
	for(int i=0;i<=9;i++)
	{
		cin>>b[i];
		s+=a[i]*b[i];
	}
	printf("%.1lf",s);
	return 0;
}

