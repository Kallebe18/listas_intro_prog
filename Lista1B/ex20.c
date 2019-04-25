#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c, p, ar, s1, s2, s3;
	scanf("%f %f %f", &a, &b, &c);
	s1 = a + b;
	s2 = b + c;
	s3 = a + c;
	if(a <  s2 && b < s3 && c < s1){
		p = a+b+c;
		printf("Perimetro = %.1f\n", truncf(p*10)/10);
	} else {
		ar = ((a+b)*c)/2;
		printf("Area = %.1f\n", truncf(ar*10)/10);
	}
	return 0;
}
