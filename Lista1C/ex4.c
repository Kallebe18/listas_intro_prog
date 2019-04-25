#include <stdio.h>

int main(void){
	int x, y;
	scanf("%d %d", &x, &y);
	if(x%2 == 0){
		for(int i=0; i < y; i++){
			printf("%d ", x);
			x+=2;
		}
		printf("\n");
	} else{
		printf("O PRIMEIRO NUMERO NAO E PAR\n");
	}
	return 0;
}
