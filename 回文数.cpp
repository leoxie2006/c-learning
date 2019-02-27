#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%10==n/10000%10&&n/10%10==n/1000%10)
	cout<<"YES";
	else cout<<"NO";
	return 0;
}


