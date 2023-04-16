//table
//#include <stdio.h>
//int main(){
//	int a;
//	scanf("%d",&a);
//	for(int i=1;i<=10;i++){
//		printf("%d * %d = %d\n",a,i,a*i);
//	}
//}

#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("enter first num\n");
	scanf("%d",&a);
	printf("enter second num\n");
	scanf("%d",&b);
	temp=b;
	b=a;
	a=temp;
	printf("%d %d",a,b);
}
