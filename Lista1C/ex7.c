#include <stdio.h>

int main(void){
    int m, c = 1;
    double np[8], nl[5], nt, mp, ml, t, h;
    while(c != 0){
        mp = 0; ml = 0;
        scanf("%d", &m);
        if(m == -1) c = 0;
        for(int i=0; i<8; i++){
            scanf("%lf", &np[i]);
            mp += np[i];
            if(np[i] == -1) c = 0;
        }
        mp /= 8;
        mp *= 0.7;
        for(int i=0; i<5; i++){
            scanf("%lf", &nl[i]);
            if(nl[i] == -1) c = 0;
            ml += nl[i];
        }
        ml /= 5;
        ml *= 0.15;
        scanf("%lf%lf", &nt, &h);
        nt *= 0.15;
        if(h == -1) c = 0;
        if(c == 0) break;
        nt = mp+ml+nt;
        t = h/125;
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ", m, truncf(nt*100)/100);
        if(t >= 0.75 && nt >= 6) printf("APROVADO\n");
        else if(t < 0.75 && nt >= 6) printf("REPROVADO POR FREQUENCIA\n");
        else if(t >= 0.75 && nt < 6) printf("REPROVADO POR NOTA\n");
        else if(t < 0.75 && nt < 6) printf("REPROVADO POR NOTA E FREQUENCIA\n");
    }
    return 0;
}
