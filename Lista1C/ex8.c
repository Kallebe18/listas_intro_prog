#include <stdio.h>

int main(void){
    int p1, p2, x = 0;
    scanf("%d%d", &p1, &p2);
    while(p1 < p2){
        p1 += p1*0.03;
        p2 += p2*0.015;
        x += 1;
    }
    printf("ANOS = %d", x);
}
