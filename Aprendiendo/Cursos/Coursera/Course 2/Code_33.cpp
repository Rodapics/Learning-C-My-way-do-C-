
#include <stdio.h>
int main(void) {
    int numGrades;
    scanf("%d", &numGrades);
    int total = 0;
    int i;
    for(i=0; i<numGrades; i++){
        int grade;
        scanf("%d",&grade);
        total +=grade;
    }
    
    double average;
    
    average = total / (double)numGrades;
    printf("%0.2f\n ",average);
    
    return 0;
}


