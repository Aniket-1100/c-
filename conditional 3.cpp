#include <stdio.h>
int main(){
	char a;
	printf("enter the character:\n");
	scanf("%s",&a);
	if(a>='a' && a<='z'){
		printf("entered character is lowercase");
	}
	else if(a>='A' && a<='Z'){
		printf("entered character is uppercase");
	}
	else if(a>='0' && a<='9'){
		printf("entered character is numeric");
	}
}
