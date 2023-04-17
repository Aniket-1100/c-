#include <stdio.h>
int main()
{
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	
	int i=1;
	while(i<=a){
		int j=1,v=i;
		while(j<=i){
			char ch = 'A'+v-1;
			printf("%c",ch);
			v+=1;
			j+=1;
		}
		printf("\n");
		i+=1;
	}
}
