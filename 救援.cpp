#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p;
	double x,y,d,t;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y>>p;
		d=sqrt(x*x+y*y);
		t+=d*2/50+1.5*p;
	}
	cout<<(int)ceil(t);
	return 0;
}

