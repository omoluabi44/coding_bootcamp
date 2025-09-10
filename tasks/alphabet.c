#include <stdio.h>




int main(void) {
	int n = 'a';

	while ( n <= 'z'){
		if (n != 'a' &&  n != 'e')
			putchar(n);
		n++;
	}
	putchar(10);
	return 0;

}
