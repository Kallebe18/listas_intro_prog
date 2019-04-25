#include <stdio.h>
#include <math.h>

int main(void){
	int i;
	float a, b, c, ma, me, men;
	//maior, medio, menor
	scanf("%d%f%f%f", &i, &a, &b, &c);
	if(a >= b && a >= c){
		ma = a;
		if(b >= c){
			me = b; men = c;
		} else if(c >= b){
			me = c; men = c;
		}
	} else if(b >= a && b >= c){
		ma = b;
		if(a >= c){
			me = a; men = c;
		} else if(c >= a){
			me = c; men = a;
		}
	} else if(c >= a && c >= b){
		ma = c;
		if(a >= b){
			me = a; men = b;
		} else if(b >= a){
			me = b; men = a;
		}
	}
	if(i == 1){
		printf("%.2f %.2f %.2f\n", truncf(men*100)/100, truncf(me*100)/100, truncf(ma*100)/100);
	}
	if(i == 2){
		printf("%.2f %.2f %.2f\n", truncf(ma*100)/100, truncf(me*100)/100, truncf(men*100)/100);
	}
	if(i == 3){
		printf("%.2f %.2f %.2f\n", truncf(me*100)/100, truncf(ma*100)/100, truncf(men*100)/100);
	}
	return 0;
}
