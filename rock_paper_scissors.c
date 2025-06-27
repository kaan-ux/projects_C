#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
    
    srand(time(NULL));

    printf("!!! ROCK PAPER SCISSORS !!!\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice){
        case 1:
            printf("You chose rock\n");
            break;
        case 2:
            printf("You chose paper\n");
            break;
        case 3:
        printf("You chose scissors\n");
        break;


    }


    switch(computerChoice){
        case 1:
            printf("computer chose rock\n");
            break;
        case 2:
            printf("computer chose paper\n");
            break;
        case 3:
        printf("computer chose scissors\n");
        break;


    }

    checkWinner(userChoice, computerChoice);




    return 0;
}

int getComputerChoice(){
    return (rand() % 3) + 1;
}
int getUserChoice(){

    int choice = 0;

    do{
        printf("Choose an option\n");
        printf("1.ROCK\n");
        printf("2.PAPER\n");
        printf("3.SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 3);

    return choice;
}
void checkWinner(int userChoice, int computerChoice){
    if(userChoice == computerChoice){
        printf("It's a tie");
    }
    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)){
        printf("You win");
    }
    else{
        printf("You lose");
    }
}