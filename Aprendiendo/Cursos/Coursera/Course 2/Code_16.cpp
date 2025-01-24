// 
#include <stdio.h>
int main(void) {
    int age;
    double height;  //Define a real number
    printf("What is your age?");
    scanf("%d",&age); // Ask to the user about the value of the variable age.
    printf("What is your height?");
    scanf("%lf",&height);
    printf("You are %d years old and %.2lf meters tall.",age,height);
    return 0;
}
