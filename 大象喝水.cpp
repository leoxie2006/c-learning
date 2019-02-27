#include<bits/stdc++.h>
using namespace std;
int main(){
	double pi=3.14159;
	double r,h,l;
	cin>>h>>r;
	l=20*1000/(pi*r*r*h);
	cout<<ceil(l);
	return 0;
}
