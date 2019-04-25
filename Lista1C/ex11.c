#include <stdio.h>

int main(void){
    int n, i, j;
    scanf("%d", &n);
    int seq[n], ma=1, t=1;
    for(i=0; i<n; i++){
        scanf("%d", &seq[i]);
    }
    for(i=0; i<n; i++){
        if(i+1 < n){
            if(seq[i]<seq[i+1]){
                t += 1;
                if(t > ma){
                    ma = t;
                }
            } else {
                t = 1;
            }
        }
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", ma);
}
