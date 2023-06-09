#include <stdio.h>
int main()
{
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	
	int i=1;
	char ch = 'A';
	while(i<=a){
		int j=1;
		while(j<=a){
			printf("%c ",ch);
			ch+=1;
			j+=1;
		}
		printf("\n");
		i+=1;
		
	}
}
