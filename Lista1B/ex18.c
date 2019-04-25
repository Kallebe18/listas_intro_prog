#include <stdio.h>

int main(void){
    int a, b, c, d, n1, n2, n3, n4;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    if(a > b && a > c && a > d){
        n4 = a;
        if(b > c && b > d){
            n3 = b;
            if(c > d){
                n2 = c; n1 = d;
            } else if(d > c){
                n2 = d; n1 = c;
            }
        }
    } else if(c > b && c > d){
        n3 = c;
            if(b > d){
                n2 = b; n1 = d;
            } else if(d > b){
                n2 = d; n1 = b;
            }
        }
    } else if(d > b && d > c){
        n3 = d;
            if(b > c){
                n2 = b; n1 = c;
            } else if(c > b){
                n2 = c; n1 = b;
            }
        }
    } else if(b > a && b > c && b > d){
            n4 = b;
            if(a > c && a > d){
                n3 = a;
                if(c > d){
                    n2 = c; n1 = d;
                } else if(d > c){
                    n2 = d; n1 = c;
                }
            }
    } else if(c > a && c > d){
                n3 = c;
                if(a > d){
                    n2 = a; n1 = d;
                } else if(d > a){
                    n2 = d; n1 = a;
                }
            } else if(d > a && d > c){
                n3 = d;
                if(a > c){
                    n2 = a; n1 = c;
                } else if(c > a){
                    n2 = c; n1 = a;
                }
            }
        } else if(c > a && c > b && c > d){
            n4 = c;
            if(a > b && a > d){
                n3 = a;
                if(b > d){
                    n2 = b; n1 = d;
                } else if(d > b){
                    n2 = d; n1 = b;
                }
            } else if(b > a && b > d){
                n3 = b;
                if(a > d){
                    n2 = a; n1 = d;
                } else if(d > a){
                    n2 = d; n1 = a;
                }
            } else if(d > a && d > b){
                n3 = d;
                if(a > b){
                    n2 = a; n1 = b;
                } else if(b > a){
                    n2 = b; n1 = a;
                }
            }
        } else if(d > a && d > b && d > c){
            n4 = d;
            if(a > b && a > c){
                n3 = a;
                if(b > c){
                    n2 = b; n1 = c;
                } else if(c > b){
                    n2 = c; n1 = b;
                }
            } else if(b > a && b > c){
                n3 = b;
                if(a > c){
                    n2 = a; n1 = c;
                } else if(c > a){
                    n2 = c; n1 = a;
                }
            } else if(c > a && c > b){
                n3 = c;
                if(a > b){
                    n2 = a; n1 = b;
                } else if(b > a){
                    n2 = b; n1 = a;
                }
            }
        }
    }
    return 0;
}
