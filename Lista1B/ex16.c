#include <stdio.h>

int main(void){
    int n, p1, p2, p3, p4, p5;
    scanf("%d", &n);
    p1 = n/10000;
    p2 = n%10000/1000;
    p3 = n%1000/100;
    p4 = n%100/10;
    p5 = n%10;
    if(n > 0 && n < 100000){
        if(n > 9999 && p1 == p5 && p2 == p4){
            printf("PALINDROMO\n");
        } else if(n > 999 && p2 == p5 && p3 == p4){
            printf("PALINDROMO\n");
        } else if(n > 99 && p3 == p5){
            printf("PALINDROMO\n");
        } else if(n > 9 && p4 == p5){
            printf("PALINDROMO\n");
        } else if(n > 0){
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    } else {
        printf("NUMERO INVALIDO\n");
    }
    return 0;
}
