#include <iostream>
using namespace std;
int main (){
	int n;
	cout <<"Enter the value of n"<<endl;
	cin>>n;
	int i=1,sum = 0;
	while (i<=n){
		sum += i;
		i += 1;
	}
	cout<<sum<<endl;
}
