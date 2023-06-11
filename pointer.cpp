#include <stdio.h>
int main()
{
	int arr[500];
	int n;
	printf("enter a value\n");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf("enter element[%d] = ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("entered element[%d] = %d\n",i+1,arr[i]);
	}
	int value = arr[n-1];
	n=n-1;
	printf("\n value %d is deleted from the array\n",value);
}
