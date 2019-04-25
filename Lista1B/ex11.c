#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c, d, x1, x2;
	scanf("%f%f%f", &a, &b, &c);
	d = (b*b)-4*a*c;
	if(d < 0){
		printf("RAIZES IMAGINARIAS\n");
	}
	if(d == 0){
		x1 = (-1*b+(sqrt(d)))/(2*a);
		printf("RAIZ UNICA\nX1 = %.2f\n", truncf(x1*100)/100);
	}
	if(d > 0){
		x1 = (-1*b+(sqrt(d)))/(2*a);
		x2 = (-1*b-(sqrt(d)))/(2*a);
		printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
	}
	return 0;
}
