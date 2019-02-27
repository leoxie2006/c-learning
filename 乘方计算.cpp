#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int s=a;
	for(int i=1;i<b;i++)
	{
		s*=a;
	}
	cout<<s;
return 0;
}

