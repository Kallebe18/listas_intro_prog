#include <stdio.h>

int main(void){
    int a, b, c, d, s;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a > b && a > c && a > d){
        s = b+c+d;
    }
    if(b > a && b > c && b > d){
        s = a+c+d;
    }
    if(c > a && c > b && c > d){
        s = a+b+d;
    }
    if(d > a && d > b && d > c){
        s = a+b+c;
    }
    printf("%d", s);
    return 0;
}

