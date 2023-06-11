#include <stdio.h>
void oddd(int n);
int main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	oddd(n);
	
}
void oddd(int n){
	for(int i=0;i<n;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
}
