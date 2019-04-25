#include <stdio.h>

int main(void){
    int n, p1, p2, p3, dc;
    scanf("%d", &n);
    p1 = n/100;
    p2 = (n%100)/10;
    p3 = (n%100)%10;
    dc = (p1+p2*3+p3*5)%7;
    n *= 10; n += dc;
    printf("O NOVO NUMERO E = %d\n", n);
}
