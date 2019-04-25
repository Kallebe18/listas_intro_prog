#include <stdio.h>

int main(void){
	int n, n2 = 1;;
	scanf("%d", &n);
	int t[n];
	float p1[n], p2[n], p3[n], p4[n], r[n];
	for(int i=0; i<n; i++){
	    scanf("%d%f%f%f%f",&t[i],&p1[i],&p2[i],&p3[i],&p4[i]);
	    p1[i] = (t[i]*(p1[i])/100)*1; p2[i] = (t[i]*(p2[i])/100)*5;
	    p3[i] = (t[i]*(p3[i])/100)*10; p4[i] = (t[i]*(p4[i])/100)*20;
	    r[i] = p1[i]+p2[i]+p3[i]+p4[i];
	}
	for(int j=0; j<n; j++){
	    printf("A RENDA DO JOGO N. %d E = %.2f\n", n2, r[j]);
	    n2++;
	}
	return 0;
}
