#include <stdio.h>

int main(void){
	int ano, c;
	scanf("%d", &ano);
	if(ano%4 == 0 && ano%100 != 0){
		printf("ANO BISSEXTO\n");
	} else if(ano%100 == 0){
		if(ano%400 == 0){
			printf("ANO BISSEXTO\n");
		} else {
			printf("ANO NAO BISSEXTO\n");
		}
	}
	return 0;
}
