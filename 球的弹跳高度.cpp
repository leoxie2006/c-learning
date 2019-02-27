#include <iostream>
using namespace std;
int main()
{
	int n; 
	double ls=0,s=0; 
	cin>>n; 
	ls=n;
	s+=ls; 
	for(int i=0;i<9;i++)
	{
		ls/=2;
		s+=ls*2;
	}
	ls=1.0/2*ls;
	cout<<s<<endl;
	cout<<ls<<endl;
}
