#include<iostream>
using namespace std; 
class Number
{
	private:
		
	public:
		int x;
		Number(int n)
		{
			x=n;
		}
		int maxDivisor(int y)
		{
			int i=x>y?y:x;
			for(i;;i--)
			{
				if(x%i==0&&y%i==0) break;
			}
			return i;
		}
		void show()
		{
			cout<<x<<endl;
		}
			
};
int main() 
{
    int n,n1,n2;
    cin>>n;
    for(int i=1;i<=n;i++) 
	{
        cin>>n1>>n2;
        Number no1(n1),no2(n2);
        Number no3(no1.maxDivisor(no2.x));
    	no3.show();
	}
    return 0;
}
