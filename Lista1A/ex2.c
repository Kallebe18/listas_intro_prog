#include <stdio.h>

int main(){
    double sal, kw, c1, c2, c3;
    scanf("%lf%lf", &sal, &kw);
    c1 = ((0.7*sal)*kw)/100;
    c2 = c1/kw;
    c3 = c1-(0.1*c1);
    printf("Custo por kW: R$ %.2lf\n", c2);
    printf("Custo do consumo: R$ %.2lf\n", c1);
    printf("Custo com desconto: R$ %.2lf\n", c3);
}
