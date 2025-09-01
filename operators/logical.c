#include <stdio.h>

int main (void){
	
	/* LOGICAL  OPERATORS **/

	int a = 4 > 3;  // 1
	int b = 2 < 3; // 1
		      
	int must_be_true  = a && b;		  
	int c = 2 == 3; // 0
	int d = 2 >= 2; // 1
	int either_must_be_true = c || d;

	int e = 2 <= 3; // 1
	int f = 2 == 3;  // 0
	int not = !(e && f); 




	printf("a = %d-\nb = :%d-\nc %d\nd =: %d\ne = %d\nf = :%d\n", a, b, c, d, e, f);

	printf("must be true : \%d\n", must_be_true);
	printf("either must be true : \%d\n", either_must_be_true);
	
	printf("not  : \%d\n", not);



	return 0;
}
