#include <stdio.h>
int main()
{
	char ch = 'a';
	char *ptr = &ch;
	char _ch = 'c';
	char *_ptr = &_ch;
	printf("%u",ptr - _ptr);
}
