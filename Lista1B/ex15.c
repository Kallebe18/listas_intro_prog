#include <stdio.h>
#include <math.h>

int main(void){
    int mat, nd;
    float salmin, sal, tax, ib, div, il, res, rest;
    // matricula , salario minimo, numero de dependentes,
    // salario, taxa, imposto bruto, divisao (sal/salmin),
    // imposto liquido, resultado, resto
    scanf("%d %f %d %f %f", &mat, &salmin, &nd, &sal, &tax);
    div = sal/salmin;
    if(div > 12){
        ib = 0.2*sal;
    } else if(div > 5){
        ib = 0.08*sal;
    } else {
        ib = 0;
    }
    il = ib - 300*nd;
    res = il - sal*(tax/100);
    printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\n", mat, truncf(ib*100)/100);
    printf("IMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\n", il, truncf(res*100)/100);
    if(res > 0){
        printf("IMPOSTO A PAGAR\n");
    } else if(res == 0){
        printf("IMPOSTO QUITADO\n");
    } else {
        printf("IMPOSTO A RECEBER\n");
    }
    return 0;
}
