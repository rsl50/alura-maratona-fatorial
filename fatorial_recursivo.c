#include <stdio.h>
#include <stdlib.h>

int calcFatorial (int n) {
	if (n == 0) return 1;
	else return (n * calcFatorial(n - 1));
}

int main () {
	
	int n = 0;	
	
	scanf("%d", &n);
		
	printf("%d\n", calcFatorial(n));
	
	return (0);
}
