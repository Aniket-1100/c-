#include <stdio.h>
int main()
{
	int i=5;
	int *ptr;
	int **pptr;
	
	ptr = &i;
	pptr = &ptr;
	
	printf("%d\n",i);
	printf("%d\n",*ptr);
	printf("%d\n",**pptr);
}
