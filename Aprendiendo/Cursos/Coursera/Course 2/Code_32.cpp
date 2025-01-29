
#include <stdio.h>
int main(void) {
    int cp;
    double pp;
    double exp;
    int Iexp;
    scanf("%d",&cp);
    scanf("%lf",&pp);
    exp =cp + cp*pp/100;
    Iexp = (int) exp;
    printf("%d\n",Iexp);
    return 0;
}

