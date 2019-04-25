#include <stdio.h>

int main(){
    int n1, n2, n3, s, q;
    scanf("%d%d%d", &n1,&n2,&n3);
    if (n1 < 10 & n2 < 10 & n3 < 10){
        n1 = n1*100;
        n2 = n2*10;
        s = n1 + n2 + n3;
        q = s*s;
        printf("%d, %d", s, q);
    } else {
        printf("DIGITO INVALIDO");
    }
}
