#include <stdio.h>

int main(void){
    int n1, n2, n3, a, b, c;
    char x, y, z;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c %c %c", &x, &y, &z);
    if(x == 'A' && y == 'B'){
        if(n1 > n2 && n1 > n3){
            if(n2 > n3){
                a = n3; b = n2; c = n1;
            } else if(n3 > n2){
                a = n2; b = n3; c = n1;
            }
        } else if(n2 > n1 && n2 > n3){
            if(n1 > n3){
                a = n3; b = n3; c = n1;
            } else if(n3 > n1){
                a = n1; b = n3; c = n2;
            }
        } else if(n3 > n1 && n3 > n2){
            if(n1 > n2){
                a = n2; b = n1; c = n3;
            } else if(n2 > n1){
                a = n1; b = n2; c = n3;
            }
        }
    } else if(x == 'A' && y == 'C'){
        if(n1 > n2 && n1 > n3){
            if(n2 > n3){
                a = n3; b = n1; c = n2;
            } else if(n3 > n2){
                a = n2; b = n1; c = n3;
            }
        } else if(n2 > n1 && n2 > n3){
            if(n1 > n3){
                a = n3; b = n2; c = n1;
            } else if(n3 > n1){
                a = n1; b = n2; c = n3;
            }
        } else if(n3 > n1 && n3 > n2){
            if(n1 > n2){
                a = n2; b = n3; c = n1;
            } else if(n2 > n1){
                a = n1; b = n3; c = n2;
            }
        }
    } else if(x == 'B' && y == 'A'){
        if(n1 > n2 && n1 > n3){
            if(n2 > n3){
                a = n2; b = n3; c = n1;
            } else if(n3 > n2){
                a = n3; b = n2; c = n1;
            }
        } else if(n2 > n1 && n2 > n3){
            if(n1 > n3){
                a = n1; b = n3; c = n2;
            } else if(n3 > n1){
                a = n3; b = n1; c = n2;
            }
        } else if(n3 > n1 && n3 > n2){
            if(n1 > n2){
                a = n1; b = n2; c = n3;
            } else if(n2 > n1){
                a = n2; b = n1; c = n3;
            }
        }
    } else if(x == 'B' && y == 'C'){
        if(n1 > n2 && n1 > n3){
            if(n2 > n3){
                a = n2; b = n1; c = n3;
            } else if(n3 > n2){
                a = n3; b = n1; c = n2;
            }
        } else if(n2 > n1 && n2 > n3){
            if(n1 > n3){
                a = n1; b = n2; c = n3;
            } else if(n3 > n1){
                a = n3; b = n2; c = n1;
            }
        } else if(n3 > n1 && n3 > n2){
            if(n1 > n2){
                a = n1; b = n3; c = n2;
            } else if(n2 > n1){
                a = n2; b = n3; c = n1;
            }
        }
    } else if(x == 'C' && y == 'A'){
        if(n1 > n2 && n1 > n3){
            if(n2 > n3){
                a = n1; b = n3; c = n2;
            } else if(n3 > n2){
                a = n1; b = n2; c = n3;
            }
        } else if(n2 > n1 && n2 > n3){
            if(n1 > n3){
                a = n2; b = n3; c = n1;
            } else if(n3 > n1){
                a = n2; b = n1; c = n3;
            }
        } else if(n3 > n1 && n3 > n2){
            if(n1 > n2){
                a = n3; b = n2; c = n1;
            } else if(n2 > n1){
                a = n3; b = n1; c = n2;
            }
        }
    } else if(x == 'C' && y == 'B'){
        if(n1 > n2 && n1 > n3){
            if(n2 > n3){
                a = n1; b = n2; c = n3;
            } else if(n3 > n2){
                a = n1; b = n3; c = n2;
            }
        } else if(n2 > n1 && n2 > n3){
            if(n1 > n3){
                a = n2; b = n1; c = n3;
            } else if(n3 > n1){
                a = n2; b = n3; c = n1;
            }
        } else if(n3 > n1 && n3 > n2){
            if(n1 > n2){
                a = n3; b = n1; c = n2;
            } else if(n2 > n1){
                a = n3; b = n2; c = n1;
            }
        }
    }
    printf("%d %d %d", a, b, c);
    return 0;
}
