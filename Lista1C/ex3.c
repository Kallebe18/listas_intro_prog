#include <stdio.h>

int main(void){
	int n, q;
	scanf("%d", &n);
	for(int j=2; j <= n; j+=2){
		q = j*j;
		printf("%d^2 = %d\n", j, q);
	}
	return 0;
}
