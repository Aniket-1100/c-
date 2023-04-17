#include <stdio.h>
int _swap(int a, int b);
int swap(int *a,int *b);
int main()
{
	int a = 4,b = 5;
	printf("a = %d\nb = %d\n",a,b);
	printf("\n");
	printf("after swapping\n");
	printf("\n");
	printf("when called by value\n");
	_swap(a,b);
	printf("a = %d\nb = %d\n",a,b);
	printf("\n");
	printf("when called by reference\n");
	swap(&a,&b);
	printf("a = %d\nb = %d\n",a,b);
}
int _swap(int a,int b){
	int temp = b;
	b = a;
	a = temp;
	printf("a = %d\nb = %d\n",a,b);
}
int swap(int *a,int *b){
	int temp = *b;
	*b = *a;
	*a = temp;
	printf("a = %d\nb = %d\n",*a,*b);
	
}
