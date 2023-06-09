#include <stdio.h>
int main()
{
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	
	int i=1;
	while(i<=a){
		int j=1;
		while(j<=a){
			char ch = 'A'+j-1;
			printf("%c ",ch);
			j+=1;
		}
		printf("\n");
		i+=1;
	}
}
