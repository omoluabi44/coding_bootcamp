#include <stdio.h>




int main(void) {
	int n = 'z';

	while ( n >= 'a'){
		putchar(n);
		n--;
	}
	putchar(10);
	return 0;

}
