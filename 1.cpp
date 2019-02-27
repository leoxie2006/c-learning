#include<bits/stdc++.h>
using namespace std;
int main(){
	double s,x;
	s=0;
	for(x=2;x<=100;++x){
		s=s+(x-1)/x;
	}
	 cout<<s;
	return 0;
}

