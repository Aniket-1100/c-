#include <stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int j=1,v=i;
		while(j<=i){
			printf("%d ",v);
			v+=1;
			j+=1;
		}
		printf("\n");
		i+=1;
	}
}
