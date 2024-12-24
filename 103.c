#include <stdio.h>
int main () {
	int h, m;
	scanf ("%d:%d", &h, &m);
	if (h > 9) {
		printf ("N");
	}
	else if (h < 7) {
		printf ("N");
	}
	else {
		if (h == 9) {
			if (m > 30) {
				printf ("N");
			}
			else {
				printf ("Y");	
			}
		}
		else if (m >= 0 && m <= 59) {
			printf ("Y");
		}
		else {
			printf ("N");
		}
	}
}
