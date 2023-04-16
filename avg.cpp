#include <stdio.h>
int avg(int sc,int mt,int sans);
int main()
{
	int sc,mt,sans;
	printf("enter the marks:\n");
	scanf("%d",&sc);
	scanf("%d",&mt);
	scanf("%d",&sans);
	printf("%d",avg(sc,mt,sans));
	
}
int avg(int sc,int mt,int sans){
	return (sc+mt+sans)/3;
}
