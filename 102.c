#include <stdio.h>
int main ()
{
	int num;
	scanf ("%d", &num);
	
	if (num > 9) {
		printf ("error");
	}
	else if (num < 0) {
		printf ("error");
	}
	else if (num == 1) {
		printf ("One");
	}
	else if (num == 2) {
		printf ("Two");
	}
	else if (num == 3) {
		printf ("Three");
	}
	else if (num == 4) {
		printf ("Four");
	}
	else if (num == 5) {
		printf ("Five");
	}
	else if (num == 6) {
		printf ("Six");
	}else if (num == 7) {
		printf ("Seven");
	}
	else if (num == 8) {
		printf ("Eight");
	}
	else if (num == 9){
		printf ("Nine");
	}
	else {
		printf ("Zero");
	}
}
