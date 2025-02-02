// Activiy: You decide to bet on the final match of the Tug of War National Championship. 

//Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). There is the same number of players on each side. You record the player weights as they are presented and calculate a total weight for each team to inform your bet. You write a C program to assist with this.

//Your program should first read an integer indicating the number of members per team. Then, the program should read the player weights (integers representing kilograms) alternating by team. 

//After calculating the total weight of each team, the program should display the text "Team X has an advantage" (replacing X with 1 or 2 depending on which team has a greater total weight).

//You will then display the text "Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:" followed by the weight of team 2 (see example below).

//You are guaranteed that the two teams will not have the same total weight.

//Example:Each team is composed of four players. Those of the first weigh 110, 113, 112, and 117kg, 
//while those of the second weigh 106, 102, 121, and 111kg. 
//Team 1 weighs a total of 452kg whereas team 2 weighs a total of 440kg, giving team 1 an advantage.


#include<stdio.h>

int main(void){

    int numbermembers =0;
    int sum1 =0;
    int sum2 =0;
    
    scanf("%d ", &numbermembers);
    
    for(int i = 1; i <= numbermembers;i++){
        int t1pi = 0;
        scanf("%d ", &t1pi);
        int t2pi = 0;
        scanf("%d ", &t2pi);
        
        sum1 = sum1 + t1pi;
        sum2 = sum2 + t2pi;
    }
    
    if(sum1>sum2){
        printf("Team 1 has an advantage");
        printf("\nTotal weight for team 1: %d\n", sum1);
        printf(" Total weight for team 2: %d\n",sum2);
        
    }else{
        printf("Team 2 has an advantage");
        printf("\nTotal weight for team 1: %d\n", sum1);
        printf(" Total weight for team 2: %d\n",sum2);
    }
    
    
    
    
    
    
    return 0;
}

