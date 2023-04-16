#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter the character:"<<endl;
	cin>>ch;
	
	if ('a'<= ch && ch<='z'){
		cout<<"LOWERCASE"<<endl;
	}
	else if ('A' <= ch && ch<= 'Z'){
		cout<<"UPPERCASE"<<endl;
	}
	else if ('0' <= ch && ch<= '9'){
		cout<<"NUMBER"<<endl;
	}
	
}
