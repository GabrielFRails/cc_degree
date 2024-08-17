#include <stdio.h>

#define nvar 1

int n,n1;
int var[nvar], aux[1];

int main(void) {
	for (n = 0; n < nvar; n++) scanf("%i", &var[n]);
	aux[0] = 0;
	for (n = 1; n <= var[0]; n++) {
		printf("%d*%d*%d = ", n, n, n);
		for (n1 = 0; n1 < n; n1++) {
			if (n1 != n - 1) printf("%d+", 1 + (n1 + aux[0]) * 2);
			else printf("%d\n", 1 + (n1 + aux[0]) * 2);
		}
		aux[0] += n;
	}
	return 0;
}
