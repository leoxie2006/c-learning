#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,zd=0,zx=100000000,kd,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(zd<x)
			zd=x;
		if(zx>x)
			zx=x;
	}
	kd=zd-zx;
	cout<<kd;
	return 0;
}
