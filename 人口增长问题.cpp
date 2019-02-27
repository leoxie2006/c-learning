#include<bits/stdc++.h>
using namespace std;
int main(){
	double x,n;
	int s;
	cin>>x>>n; 
	for(int i=1;i<=n;i++){
		x*=1.001;
	}
	printf("%0.4lf",x);
	return 0;
}

