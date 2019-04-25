#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c, p, s, t;
	scanf("%f%f%f", &a, &b, &c);
	if(a > b && a > c){
		p = a;
		if(b > c){
			s = b; t = c;
		} else {
			s = c; t = b;
		}
	}
	if(b > a && b > c){
		p = b;
		if(a > c){
			s = a; t = c;
		} else {
			s = c; t = b;
		}
	}
	if(c > a && c > b){
		p = c;
		if(a > b){
			s = a; t = b;
		} else {
			s = b; t = b;
		}
	}
	printf("%.2f, %.2f, %.2f\n", truncf(t*100)/100, truncf(s*100)/100, truncf(p*100)/100);
	return 0;
}
