#include <stdio.h>

int main(void){
    double pf, pd, pi, p;
    scanf("%lf%lf%lf", &pf, &pd, &pi);
    pd /= 100;
    pi /= 100;
    p = pf+(pf*pd)+(pf*pi);
    printf("O VALOR DO CARRO E = %.2lf\n", truncf(p*100)/100);
}
