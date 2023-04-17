#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = 2*n-1;
    int i;
    for (i=0;i<len;i++){
    	int j;
    	for(j=0;j<len;j++){
    		int min = i<j?i:j;
    		min = min<len-i?min:len-i-1;
    		min = min<len-j?min:len-j-1;
    		printf("%d",n-min);
		}
		printf("\n");
    }
    return 0;
}
