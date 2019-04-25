#include <stdio.h>

int main(){
	double f, c, p, m;
	scanf("%lf%lf", &f, &p);
	c = 5*((f-32)/9);
	m = p*25.4;
	printf("O VALOR EM CELSIUS = %.2lf\n", c);
	printf("A QUANTIDADE DE CHUVA E = %.2lf\n", m);
	return 0;
}

