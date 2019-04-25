#include <stdio.h>

int main(void){
    int q;
    float n, x, k, r, t;
    scanf("%f%f%d%f", &n, &x, &q, &k);
    for(int i=0; i<4; i++){
        if(i == 0){
            t = x;
            printf("Tabuada de soma:\n");
            for(int i=0; i<q; i++){
                r = n + x;
                printf("%.2f + %.2f = %.2f\n", n, x, r);
                x += k;
            }
            x = t;
        } else if(i == 1){
            printf("Tabuada de subtracao:\n");
            t = x;
            for(int i=0; i<q; i++){
                r = n - x;
                printf("%.2f - %.2f = %.2f\n", n, x, r);
                x += k;
            }
            x = t;
        } else if(i == 2){
            t = x;
            printf("Tabuada de multiplicacao:\n");
            for(int i=0; i<q; i++){
                r = n * x;
                printf("%.2f x %.2f = %.2f\n", n, x, r);
                x += k;
            }
            x = t;
        } else if(i == 3){
            printf("Tabuada de divisao:\n");
            for(int i=0; i<q; i++){
                r = n / x;
                printf("%.2f / %.2f = %.2f\n", n, x, r);
                x += k;
            }
        }
    }
    return 0;
}
