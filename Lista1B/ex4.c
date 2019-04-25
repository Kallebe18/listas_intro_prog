#include <stdio.h>
#include <math.h>

int main(void){
	int horas;
	float valor;
	scanf("%d", &horas);
	if(horas < 3){
		valor = horas*5;
	} else {
		valor = (horas/3)*10;
		if(horas%3 > 0){
			valor += 10;
		}
	}
	printf("O VALOR A PAGAR E = %.2f\n", truncf(valor*100)/100);
	return 0;
}
