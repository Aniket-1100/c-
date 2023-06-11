#include <stdio.h>
int main()
{
	int a;
	printf("enter the number you want to check\n");
	scanf("%d",&a);
	for (int i=2;i<a;i++){
		if (a%i==0){
			int flag = 1;
		}
		if (flag==1){
			printf("not prime");
		}
		else{
			printf("prime")
		}
	}
}
