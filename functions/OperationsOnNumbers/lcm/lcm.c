#include <stdlib.h>
int lcm(int a, int b){
    
    int r, max,A=a, B=b;
    if(b > a) max =b, b = a, a = max;
    do{
        r = a%b;
        a = b;
        b = r;
    }while(r > 0);
    int gcd = a;

  int ppcm = abs(A*B)/gcd;
    return ppcm;
}

