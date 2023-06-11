#include <stdio.h>
void arrrev(int *arr,int n);
int main(){
	int n;
	printf("size of the array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter elements: ");
		scanf("%d",&arr[i]);
	}
	arrrev(arr,n);
}
void arrrev(int *arr,int n){
	for (int i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
