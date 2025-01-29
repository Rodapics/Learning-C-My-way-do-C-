#include <stdio.h>
int main(void) {
    // pay 166 dollars using 20-dollar bills, rest with 1-dollar bills
    int int1, int2;
    scanf("%d \n", &int1);
    scanf("%d \n", &int2);
    printf("%d\n",int1/int2);
    printf("%d",int1%int2);
    return 0;
}
