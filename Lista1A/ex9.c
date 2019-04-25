#include <stdio.h>

int main(void){
    double  m, a, t, v, d, w;
    scanf("%lf%lf%lf", &m, &a, &t);
    d = (a*t*t)/2;
    v = a*t;
    m *= 1000;
    w = (m*v*v)/2;
    v *= 3.6;
    printf("VELOCIDADE = %.2lf\n", v);
    printf("ESPACO PERCORRIDO = %.2lf\n", d);
    printf("TRABALHO REALIZADO = %.2lf\n", w);
    return 0;
}
