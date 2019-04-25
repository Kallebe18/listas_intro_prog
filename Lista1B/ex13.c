#include <stdio.h>

int main(void){
    int data, d, m, a;
    scanf("%d", &data);
    d = data/1000000;
    m = data%1000000/10000;
    a = data%10000;
    if(d > 0 && d <= 31 && m > 0 && m < 13 && a > 0){
        if(m == 1){
            printf("%d de janeiro de %d", d, a);
        } else if(m == 2 && d <= 28){
            printf("%d de fevereiro de %d\n", d, a);
        } else if(m == 3){
            printf("%d de marco de %d\n", d, a);
        } else if(m == 4 && d < 31){
            printf("%d de abril de %d\n", d, a);
        } else if(m == 5){
            printf("%d de maio de %d\n", d, a);
        } else if(m == 6 && d < 31){
            printf("%d de junho de %d\n", d, a);
        } else if(m == 7){
            printf("%d de julho de %d\n", d, a);
        } else if(m == 8){
            printf("%d de agosto de %d\n", d, a);
        } else if(m == 9 && d < 31){
            printf("%d de setembro de %d\n", d, a);
        } else if(m == 10){
            printf("%d de outubro de %d\n", d, a);
        } else if(m == 11 && d < 31){
            printf("%d de novembro de %d\n", d, a);
        } else if(m == 12){
            printf("%d de dezembro de %d\n", d, a);
        } else {
            printf("Data invalida!\n");
        }
    } else {
            printf("Data invalida!\n");
    }
    return 0;
}
