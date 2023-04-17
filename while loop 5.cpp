#include <stdio.h>
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch = 'A'+i-1;
			printf("%c ",ch);
			j+=1;
		}
		printf("\n");
		i+=1;
	}
}
