#include <stdio.h>
int main ()
{
	int a1[5];
	int a2[ ] = {2, 3, 4};
	int a3[5] = {1, 2};
	int i, n;
	
	scanf ("%d", &n);
	//input to array
	for (i = 0; i < n; i++) {
		scanf ("%d", &a1[i]);
	}
	//out put from array
	for (i = 0; i < n; i++) {
		printf ("%d ", a1[i]);
	}
	
	//output from array by inverse order
}
