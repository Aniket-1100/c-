#include <stdio.h>
void square(int *n);
int main()
{
	int num = 4;
	square(&num);
	printf("num is: %d\n",num);
}

void square(int *n){
	*n = (*n)*(*n);
	printf("square is: %d\n",*n);
}
