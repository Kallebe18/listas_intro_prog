#include <stdio.h>
#include <math.h>

int main(void){
	float n;
	char c;
	scanf("%f", &n);
	if(n >= 9 && n <= 10){
		c = 'A';
	}
	if(n >= 7.5 && n < 9){
		c = 'B';
	}
	if(n >= 6 && n < 7.5){
		c = 'C';
	}
	if(n >= 0 && n <= 6){
		c = 'D';
	}
	printf("NOTA = %.1f CONCEITO = %c\n", truncf(n*10)/10, c);
	return 0;
}
