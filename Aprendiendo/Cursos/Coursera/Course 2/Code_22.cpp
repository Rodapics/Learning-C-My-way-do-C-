
#include <stdio.h>
int main(void) {
    char letter1;
    char letter2;
    
    scanf("%c", &letter1);
    
    
    printf("++++%c++++\n",letter1);
    printf("+++%c%c%c+++\n",letter1,letter1,letter1);
    printf("++%c%c%c%c%c++\n",letter1,letter1,letter1,letter1,letter1);
    printf("+%c%c%c%c%c%c%c+\n",letter1,letter1,letter1,letter1,letter1,letter1,letter1);
    printf("%c%c%c%c%c%c%c%c%c\n",letter1,letter1,letter1,letter1,letter1,letter1,letter1,letter1,letter1);
    /*
    scanf("%c", &letter2);
    printf("++++%c++++\n",letter2);
    printf("+++%c%c%c+++\n",letter2,letter2,letter2);
    printf("++%c%c%c%c%c++\n",letter2,letter2,letter2,letter2,letter2);
    printf("+%c%c%c%c%c%c%c+\n",letter2,letter2,letter2,letter2,letter2,letter2,letter2);
    printf("%c%c%c%c%c%c%c%c%c\n",letter2,letter2,letter2,letter2,letter2,letter2,letter2,letter2,letter2);
   */
    return 0;
}
