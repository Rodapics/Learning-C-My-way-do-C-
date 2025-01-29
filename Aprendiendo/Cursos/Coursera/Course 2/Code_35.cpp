#include <stdio.h>
int main(void) {
    double am;
    double pb;
    double lgb;
    int Ilgb;
    scanf("%lf",&am);
    scanf("%lf",&pb);
    lgb = am/pb;
    Ilgb = (int) lgb;
    printf("%d",Ilgb);
    return 0;
}
