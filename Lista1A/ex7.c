#include <stdio.h>

int main(){
	int h, m, s, st;
	scanf("%d%d%d", &h, &m, &s);
	st = h*3600+m*60+s;
	printf("O TEMPO EM SEGUNDOS E = %d\n", st);
}
