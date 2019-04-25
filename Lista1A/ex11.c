#include <stdio.h>

int main(void){
    int n, p1, p2, p3, n2;
    scanf("%d", &n);
    p1 = n/100;
    p2 = (n%100)/10;
    p3 = (n%10);
    n2 = p3*100+p2*10+p1;
    printf("%d", n2);
    return 0;
}
