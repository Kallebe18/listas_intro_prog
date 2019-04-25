#include <stdio.h>

int main(void){
	float rb, rfbp; //renda bruta,
	//renda familiar bruta per capita,
	int np, te, e, c; //n° de pessoas,
	// tipo de escola, etnia, cota
	scanf("%f %d %d %d", &rb, &np, &te, &e);
	rfbp = (rb/np)/937;
	if(te == 2){
		if(rfbp <= 1.5 && (e == 1 || e == 2 || e == 3)){
			c = 2;
		} else if(rfbp <= 1.5){
			c = 1;
		} else if(e == 1 || e ==2 || e == 3){
			c = 4;
		} else {
			c = 3;
		}
		printf("ALUNO COTISTA (L%d)\n", c);
	} else {
		printf("ALUNO NAO COTISTA\n");
	}
	return 0;
}
