#include <stdio.h>

int main(void){
    float n,s=0;
    scanf("%f", &n);
    for(float i=1; i<n+1; i++){
	s += 1/i;
    }
    printf("%f\n", s);
    return 0;
}
