#include <stdio.h>

int main(void){
	int a, r1, r2;
	scanf("%d", &a);
	r1 = a%3;
	r2 = a%5;
	if(r1 == 0 && r2 == 0){
		printf("O NUMERO E DIVISIVEL\n");
	} else {
		printf("O NUMERO NAO E DIVISIVEL\n");
	}
	return 0;
}
