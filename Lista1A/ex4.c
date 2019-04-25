#include <stdio.h>
#define PI 3.14159;

int main(){
	float r, h, c, ab, al, ac;
	scanf("%f%f", &r, &h);
	ab = PI;
	ab *= r*r;
	al = PI;
	al *= 2*r*h;
	ac = ab*2+al;
	c = 100*ac;
	printf("O VALOR DO CUSTO E = %.2f\n", truncf(c*100)/100);
}
