#include <stdio.h>

int main(void){
    int quant, cem, cin, dez, um;
    scanf("%d", &quant);
    cem = quant/100;
    cin = (quant%100)/50;
    dez = (quant%50)/10;
    um = (quant%10);
    printf("NOTAS DE 100 = %d\n", cem);
    printf("NOTAS DE 50 = %d\n", cin);
    printf("NOTAS DE 10 = %d\n", dez);
    printf("MOEDAS DE 1 = %d\n", um);
    return 0;
}
