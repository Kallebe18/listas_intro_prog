#include <stdio.h>

int main(void){
    int cc, dr, rt, g;
    scanf("%d%d%d", &cc, &dr, &rt);
    if(cc < 7 && dr > 50 && rt > 80000){
        g = 10;
    } else if(cc < 7 && dr > 50 && rt <= 80000){
        g = 9;
    } else if(cc < 7 && dr <= 50 && rt <= 80000){
        g = 8;
    } else {
        g = 7;
    }
    printf("ACO DE GRAU = %d", g);
}
