#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,K;
	double M,H;
	cin>>N>>K;
	for(int i=0;i<20;i++){
	M=(i+1)*N;
	H=200*pow(1+K*1.0/100,i);
	if(M>=H){
	cout<<i+1;
	return 0;
	}
	}
	cout<<"Impossible";
}
