#include <stdio.h>
#include <math.h>

int main(void){
	float sal;
	scanf("%f", &sal);
	if(sal <= 300){
		sal += sal*0.5;
	} else{
		sal += sal*0.3;
	}
	printf("SALARIO COM REAJUSTE = %.2f\n", truncf(sal*100)/100);
	return 0;
}
