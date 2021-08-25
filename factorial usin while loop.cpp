#include<iostream>
using namespace std;
class factorial
{
	public:
		char i,n,f;
		void getdata()
		{
		cout<<"enter a positive integer= "<<endl;
		cin>>n;
		while(i<=n)
		{
			f=f*i;
			i++;
			}	
		
			
		}
};
int main()
{
int n,f;
	cout<<"factorial of "<<n<<"= "<<f;
	factorial fac;
	fac.getdata();
		
	return 0;
	}
