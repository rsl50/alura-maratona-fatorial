#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n = 0;	
	int fatorial = 1;
	
	scanf("%d", &n);
	
	/*while (n > 0) {
		fatorial *= n--;
	}*/
	
	int i;
	for (i = n; i > 0; i--) {
		fatorial *= i;
	}
	
	printf("%d\n", fatorial);
	
	return (0);
}
