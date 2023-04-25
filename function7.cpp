#include <stdio.h>
void fibo(int n);
int main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	fibo(n);
	
}
void fibo(int n){
	int a = 0,b=1,c;
	for(int i=1;i<n-1;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("the %dth term of the fibonacci series is %d",n,c);
}
