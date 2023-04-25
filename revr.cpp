#include <stdio.h>
int main()
{
	int x=2345,y=0;
	while(x){
		y=x%10;
		printf("%d",y);
		x=x/10;
	}
return 0;
}
