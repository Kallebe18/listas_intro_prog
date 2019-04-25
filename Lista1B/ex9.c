#include <stdio.h>

int main(void){
	int n, um, um2, c, c2, d, d2, u;
	scanf("%d", &n);
	um = n/1000;
	c = n%1000/100;
	d = n%100/10;
	u = n%10;
	um2 = um*1000;
	c2 = c*100;
	d2 = d*10;
	if (n > 0 && n < 10000){
        if (n < 10 && n > 0){
            if(n > 1){
                printf("(primeira ordem) %d = %d unidades = %d\n", n, n, n);}
            if(n == 1){
                printf("(primeira ordem) %d = %d unidade = %d\n", n, n, n);}}
		if(n > 9 && n < 100){
			if(d > 1 && u > 1){
				printf("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d\n", n, d, u, d2, u);}
			if(d > 1 && u == 1){
				printf("(segunda ordem) %d = %d dezenas + %d unidade = %d + %d\n", n, d, u, d2, u);}
			if(d == 1 && u > 1){
				printf("(segunda ordem) %d = %d dezena + %d unidades = %d + %d\n", n, d, u, d2, u);}
			if(d == 1 && u == 1){
				printf("(segunda ordem) %d = %d dezena + %d unidade = %d + %d\n", n, d, u, d2, u);}
			if(d > 1 && u == 0){
				printf("(segunda ordem) %d = %d dezenas = %d\n", n, d, d2);}
			if(d == 1 && u == 0){
				printf("(segunda ordem) %d = %d dezena = %d\n", n, d, d2);}}
        if(n > 99 && n < 1000){
			if(c > 1 && d > 1 && u > 1){
				printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
			if(c > 1 && d > 1 && u == 1){
				printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidade = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
			if(c > 1 && d == 1 && u > 1){
				printf("(terceira ordem) %d = %d centenas + %d dezena + %d unidades = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
			if(c == 1 && d > 1 && u > 1){
				printf("(terceira ordem) %d = %d centena + %d dezenas + %d unidades = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
			if(c > 1 && d == 1 && u == 1){
				printf("(terceira ordem) %d = %d centenas + %d dezena + %d unidade = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
			if(c == 1 && d == 1 && u > 1){
				printf("(terceira ordem) %d = %d centena + %d dezena + %d unidades = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
			if(c == 1 && d > 1 && u == 1){
				printf("(terceira ordem) %d = %d centena + %d dezenas + %d unidade = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
			if(c == 1 && d == 1 && u == 1){
				printf("(terceira ordem) %d = %d centena + %d dezena + %d unidade = %d + %d + %d\n", n, c, d, u, c2, d2, u);}
            if(c > 1 && d > 1 && u == 0){
				printf("(terceira ordem) %d = %d centenas + %d dezenas = %d + %d\n", n, c, d, c2, d2);}
            if(c > 1 && d == 1 && u == 0){
				printf("(terceira ordem) %d = %d centenas + %d dezena = %d + %d\n", n, c, d, c2, d2);}
            if(c == 1 && d > 1 && u == 0){
				printf("(terceira ordem) %d = %d centena + %d dezenas = %d + %d\n", n, c, d, c2, d2);}
            if(c == 1 && d == 1 && u == 0){
				printf("(terceira ordem) %d = %d centena + %d dezena = %d + %d\n", n, c, d, c2, d2);}
            if(c > 1 && d == 0 && u > 1){
				printf("(terceira ordem) %d = %d centenas + %d unidades = %d + %d\n", n, c, u, c2, u);}
            if(c > 1 && d == 0 && u == 1){
				printf("(terceira ordem) %d = %d centenas + %d unidade = %d + %d\n", n, c, u, c2, u);}
            if(c == 1 && d == 0 && u > 1){
				printf("(terceira ordem) %d = %d centena + %d unidades = %d + %d\n", n, c, u, c2, u);}
            if(c == 1 && d == 0 && u == 1){
				printf("(terceira ordem) %d = %d centena + %d unidade = %d + %d\n", n, c, u, c2, u);}
            if(c > 1 && d == 0 && u == 0){
				printf("(terceira ordem) %d = %d centenas = %d\n", n, c, c2);}
            if(c == 1 && d == 0 && u == 0){
                printf("(terceira ordem) %d = %d centena = %d\n", n, c, c2);}}
        if(n > 999 && n < 10000) {
			if(um > 1 && c > 1 && d > 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c > 1 && d > 1 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c > 1 && d == 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c == 1 && d > 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c > 1 && d > 1 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c > 1 && d == 1 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c == 1 && d == 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c == 1 && d > 1 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezenas + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c > 1 && d > 1 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c == 1 && d == 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c == 1 && d > 1 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c > 1 && d == 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c == 1 && d == 1 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c > 1 && d == 1 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c == 1 && d > 1 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c == 1 && d == 1 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um == 1 && c == 1 && d == 1 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d\n", n, um, c, d, u, um2, c2, d2, u);}
			if(um > 1 && c > 1 && d > 1 && u == 0){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um > 1 && c > 1 && d == 1 && u == 0){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um > 1 && c == 1 && d > 1 && u == 0){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um == 1 && c > 1 && d > 1 && u == 0){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um > 1 && c == 1 && d == 1 && u == 0){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um == 1 && c == 1 && d > 1 && u == 0){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezenas = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um == 1 && c > 1 && d == 1 && u == 0){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um == 1 && c == 1 && d == 1 && u == 0){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena = %d + %d + %d\n", n, um, c, d, um2, c2, d2);}
			if(um > 1 && c > 1 && d == 0 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d unidades = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um > 1 && c > 1 && d == 0 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d unidade = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um > 1 && c == 1 && d == 0 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d unidades = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um == 1 && c > 1 && d == 0 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d unidades = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um > 1 && c == 1 && d == 0 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d unidade = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um == 1 && c == 1 && d == 0 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d unidades = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um == 1 && c > 1 && d == 0 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d unidade = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um == 1 && c == 1 && d == 0 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d unidade = %d + %d + %d\n", n, um, c, u, um2, c2, u);}
			if(um > 1 && c == 0 && d > 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas + %d unidades = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um > 1 && c == 0 && d > 1 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas + %d unidade = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um > 1 && c == 0 && d == 1 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d dezena + %d unidades = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um == 1 && c == 0 && d > 1 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d dezenas + %d unidades = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um > 1 && c == 0 && d == 1 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d dezena + %d unidade = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um == 1 && c == 0 && d == 1 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d dezena + %d unidades = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um == 1 && c == 0 && d > 1 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d dezenas + %d unidade = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um == 1 && c == 0 && d == 1 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d dezena + %d unidade = %d + %d + %d\n", n, um, d, u, um2, d2, u);}
			if(um > 1 && c == 0 && d > 1 && u == 0){
				printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas = %d + %d\n", n, um, d, um2, d2);}
			if(um > 1 && c == 0 && d == 1 && u == 0){
				printf("(quarta ordem) %d = %d unidades de milhar + %d dezena = %d + %d\n", n, um, d, um2, d2);}
			if(um == 1 && c == 0 && d > 1 && u == 0){
				printf("(quarta ordem) %d = %d unidade de milhar + %d dezenas = %d + %d\n", n, um, d, um2, d2);}
			if(um == 1 && c == 0 && d == 1 && u == 0){
				printf("(quarta ordem) %d = %d unidade de milhar + %d dezena = %d + %d\n", n, um, d, um2, d2);}
			if(um > 1 && c == 0 && d == 0 && u > 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d unidades =  %d + %d\n", n, um, u, um2, u);}
			if(um == 1 && c == 0 && d == 0 && u > 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d unidades =  %d + %d\n", n, um, u, um2, u);}
			if(um > 1 && c == 0 && d == 0 && u == 1){
				printf("(quarta ordem) %d = %d unidades de milhar + %d unidade =  %d + %d\n", n, um, u, um2, u);}
			if(um == 1 && c == 0 && d == 0 && u == 1){
				printf("(quarta ordem) %d = %d unidade de milhar + %d unidade =  %d + %d\n", n, um, u, um2, u);}
			if(um > 1 && c == 0 && d == 0 && u == 0){
				printf("(quarta ordem) %d = %d unidades de milhar = %d\n", n, um, um2);}
			if(um == 1 && c == 0 && d == 0 && u == 0){
				printf("(quarta ordem) %d = %d unidade de milhar = %d\n", n, um, um2);}
            }
	} else {
            printf("Numero invalido!\n");}
	return 0;
}
