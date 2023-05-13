#include<stdio.h>
struct Demo1{
	char ch;
	int i;
};
union Demo2{
	char ch;
	int i;
};
int main()
{
	struct Demo1 d1;
	d1.ch = 'A';
	d1.i=65;
	union Demo2 d2;
	d2.ch = 'A';
	d2.i=65;
	
	
	printf("\n%d",sizeof(d1));
	printf("\n%d",sizeof(d2));
	printf("\n%c\t%d",d1.ch,d1.i);
	printf("\n%c\t%d",d2.ch,d2.i);
}
