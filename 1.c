#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int generateRandomNumber(int n)
{
   
    return rand()%n;
}
int main(){
       srand(time(NULL));
    
    int player_score = 0;
    int computer_score = 0;
    int draw = 0;
    int computer;
    char name[20];
    char i[20];
     
       printf("Enter player name:");
      scanf("%19s",name);
     printf("\nPlayer1:%s\n", name);
    
     for (int round = 1; round <= 3; round++)
     { 
        printf("Attempt: %d\n", round);
printf("Choose Rock Paper or Scissor: ");
scanf("%s",&i);
computer = generateRandomNumber(3);
printf("\ncomputer choose: ");
if (computer == 0)
{
    printf("Rock\n");
}
else if (computer == 1)
{
    printf("Paper\n");
}
else if (computer== 2)
{
    printf("Scissor\n");
}
int player = -1;
if (strcmp(i, "Rock") == 0)
{
    player = 0;
}
if (strcmp(i, "Paper") == 0)
{
    player = 1;
}
if (strcmp(i, "Scissor") == 0)
{
    player = 2;
}


if (computer == player)
{
   printf("Match draws\n");
    draw++;
}
else if(computer == 0 && player ==2)
{
    printf("computer wins\n");
    computer_score++;
}
else if(computer == 0 && player ==1)
{
    printf("player wins\n");
    player_score++;
}
else if(computer == 1 && player ==2)
{
    printf("player wins\n");
    player_score++;
}
else if(computer == 1 && player ==0)
{
    printf("computer wins\n");
    computer_score++;
}
else if(computer == 2 && player == 1)
{
    printf("computr wins\n");
    computer_score++;
}
else if(computer == 2 && player ==0)
{
    printf("player wins\n");
    player_score++;
}
     }
printf("\nFinal score:\n");
printf("Player: %d\n",player_score);
printf("computer: %d\n",computer_score);
printf("Draws: %d\n", draw);

if(player_score>computer_score){
printf("\nCongratulations you won the game\n");
}
else if (computer_score>player_score)
{
   printf("Oop's You loose the game");
}
else if(player_score == computer_score)
{
    printf("Match draws");
}
    
    return 0;
}