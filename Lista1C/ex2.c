#include <stdio.h>
#include <math.h>

int main(void){
	int n;
	scanf("%d", &n);
	float f[n], c[n];
	for(int i=0;i<n;i++){
		scanf("%f", &f[i]);
		c[i] = (f[i]-32)*5/9;
	}
	for(int j=0;j<n;j++){
		printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", truncf(f[j]*100)/100, truncf(c[j]*100)/100);
	}
	return 0;
}
