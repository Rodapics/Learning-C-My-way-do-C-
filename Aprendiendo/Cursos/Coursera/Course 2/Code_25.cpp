#include <stdio.h>
int main(void) {
    double kilometers;
    double conversion=0;
    scanf("%lf",&kilometers);
    conversion = kilometers*0.621371;
    printf("%f",conversion);
    return 0;
}

