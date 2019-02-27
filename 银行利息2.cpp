#include<bits/stdc++.h>
using namespace std;
int main(){
	double R,Y,M;
	cin>>R>>M>>Y;
	for(int i=1;i<=Y;i++)
	{
		M*=1+0.01*R;
	}
	cout<<(int)M; 
	return 0;
}

