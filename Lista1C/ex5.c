#include <stdio.h>

int main(void){
    int p, r, n, s = 0;
    scanf("%d %d %d", &p, &r, &n);
    for(int i=0; i<n; i++){
	s += p+r*i;
    }
    printf("%d\n", s);
    return 0;
}
