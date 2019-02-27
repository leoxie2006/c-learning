#include <stdio.h>
int a[102];
int main()
{
 int n,max=0,i,s=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 scanf("%d",&a[i]);
 if(a[i]>max) max=a[i];
 }
 for(i=1;i<=n;i++)
 if(a[i]<max) s+=a[i];
 printf("%d",s);
 return 0;
}
