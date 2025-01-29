#include <stdio.h>
#include <math.h>

int main(void) {
    int pb =120;
    int bc = 45;
    int Itc;
    double cn;
    double tc;

    scanf("%lf",&cn);
    
    double resultado = ceil(cn/pb); 
    
    tc = resultado * bc;
    
    Itc = (int) tc;
    printf("%d",Itc);
    
    return 0;
}
