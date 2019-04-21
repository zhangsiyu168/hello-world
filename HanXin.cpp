#include<iostream>
using namespace std;
int a[101];
class HanXin
{
	private:
		
	public:
		void line3(int x)
		{
			for(int i=0;9+3*i+x<=100;i++)
			{
				a[9+3*i+x]++;
			}
		}
		void line5(int x)
		{
			for(int i=0;5+5*i+x<=100;i++)
			{
				a[10+5*i+x]++;
			}
		}
		void line7(int x)
		{
			for(int i=0;7+7*i+x<=100;i++)
			{
				a[7+7*i+x]++;
			}
		}
		void showMany()
		{
			int i;
			for(i=10;i<=100;i++)
			{
				if(a[i]==3) break;
			}
			if(i==101) cout<<"Impossible"<<endl;
			else cout<<i<<endl;
		
		}
};
int main() 
{
    int n,n1,n2,n3;
    cin>>n;
    for(int i=0;i<n;++i)
	{
			for(int j=0;j<=100;j++)
			{
				a[j]=0;
			}
        cin>>n1>>n2>>n3;
        HanXin hx;  
        hx.line3(n1);  
        hx.line5(n2);   
        hx.line7(n3);   
        hx.showMany();
    }
}
