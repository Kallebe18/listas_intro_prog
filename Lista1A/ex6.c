#include <stdio.h>
#include <math.h>

int main(){
	float h, a, ab, v;
	scanf("%f %f", &h, &a);
	ab = (3*a*a*sqrt(3))/2;
	v = (ab*h)/3;
	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", truncf(v*100)/100);
}
