#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	double x,y;
	cin>>n;
	cin>>a>>b;
	x=b*1.0/a;
	for(int i=2;i<=n;i++)
	{
		cin>>a>>b;
		y=b*1.0/a;
		if(y-x>0.05)
			cout<<"better"<<endl;
		else if(x-y>0.05)
			cout<<"worse"<<endl;
		else
		cout<<"same"<<endl;
	}
}
