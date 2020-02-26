#include<iostream>
#include<string.h>
using namespace std;
class string
{
	public:
	char str[20];
	void accept_string()
	{
	cout<<"\nenter string:"<<endl;
	cin>>str;	
	}
    void display_string()
	{
	cout<<str;
	}
	string  operator + (string x)
	{
		string s;
		strcat(str,x.str);
		strcpy(s.str,str);
		return s;
	}
};
void main()
{
	string str1,str2,str3;
	str1.accept_string();
	str2.accept_string();
	cout<<"_________________";
	cout<<"\n\nfirst string:";
	str1.display_string();
	cout<<"\n\nsecond string:";
	str2.display_string();
	cout<<"_________________";
	str3=str1+str2;
	cout<<"\n\nconcatented string is:";
	str3.display_string();
	getch();
}
