#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,i,s,m,e;
char c;
i=1;
cin>>b>>a>>c>>s;
e=a;
m=1;
if(s==1)
{
for(;i<a;i++)
{
cout<<c;
}
cout<<c<<endl;
b-=2;
a-=2;
for(i=1;i<=b;i++)
{
cout<<c;
for(m=1;m<=a;m++)
{
cout<<c;
}
cout<<c<<endl;
}
for(i=1;i<=e;i++)
{
cout<<c;
}
return 0;
}
if(s==0)
{
for(;i<a;i++)
{
cout<<c;
}
cout<<c<<endl;
b-=2;
a-=2;
for(i=1;i<=b;i++)
{
cout<<c;
for(m=1;m<=a;m++)
{
cout<<" ";
}
cout<<c<<endl;
}
for(i=1;i<=e;i++)
{
cout<<c;
}
return 0;
}
}
