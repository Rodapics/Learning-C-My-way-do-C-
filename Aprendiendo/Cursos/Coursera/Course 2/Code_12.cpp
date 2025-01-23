
#include <stdio.h>
int main(void) {
    /* Variable names can use:  
    lowercase and uppercase letters (characters) and digits
    do not use special characters like @ # & " ...
    do not use accented characters like é è à ...
    do not start with a digit
    start only with a letter
    spaces are forbidden
     _ may be used instead of a space in the name of the variable
    YouCanUseUppercaseLettersBetweenWordsInsteadOfSpaces   */

    int validBalance;
    validBalance = 50;
    printf("I have %d dollars in my bank account.\n", validBalance);
    return 0;
}

