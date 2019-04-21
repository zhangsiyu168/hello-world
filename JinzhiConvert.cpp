#include<iostream>
#include<cmath>
using namespace std;
int c[10];
int main()
{
	int a,b,n,w,d;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(w=0;;w++)
		{
			if(a>=pow(b,w)&&a<pow(b,w+1)) break;
		}
		d=w;
		for(int j=1;j<=w+1;j++)
		{
			c[j]=a/(int)(pow(b,d));
			a=a-c[j]*(int)(pow(b,d--));
		} 
		for(int j=1;j<=w+1;j++)
		{
			cout<<c[j];
		}
		cout<<endl;
	}
	return 0;
}
