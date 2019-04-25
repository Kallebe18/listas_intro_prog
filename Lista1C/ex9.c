#include <stdio.h>

int main(void){
    double n, x = 1;
    scanf("%lf", &n);
    for(double i=1; i<n+1; i++){
        x *= i;
    }
    printf("%.lf! = %.lf", n, x);
    return 0;
}
