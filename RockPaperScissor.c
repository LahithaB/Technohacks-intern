// ROCK - PAPER - SCISSOR GAME
// program that allows the user to play the game of Rock-Paper-Scissors against the computer.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Called function to generate computer cjoice
int generateComputerChoice() 
{
    // Generate a random number between 0 and 2
    return rand() % 3;
}

//Called function to find the winner
int determineWinner(int playerChoice, int computerChoice)
 {
    // Rock: 0, Paper: 1, Scissors: 2
    // Returns -1 for a tie, 0 if player wins, 1 if computer wins

    // If player and computer choice is same
    if (playerChoice == computerChoice)
    {
        return -1;
    }

    if ((playerChoice == 0 && computerChoice == 2) || (playerChoice == 1 && computerChoice == 0) ||
         (playerChoice == 2 && computerChoice == 1))
    {
        return 0;
    }
        
    else
    {
        return 1;
    }   
}

// Main function where program starts
int main() 
{
    //Variables to store the player choice, computer choice and the result of the game
    int playerChoice, computerChoice, result;
    
    // Seed the random number generator
    srand(time(NULL));

    // Statements to select player choice
    printf("\n---Welcome to Rock-Paper-Scissors!---\n\n");
    printf("**Lets start the Game**\n");
    printf("Please select one of your choice!\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");

    printf("\nEnter your choice:");
    // Reads the player's choice
    scanf("%d", &playerChoice);

    // Validate player's choice
    if (playerChoice < 0 || playerChoice > 2) 
    {
        printf("Invalid choice! Please enter a number between 0 and 2.\n\n");
        return 1;
    }

    // Generate computer's choice
    computerChoice = generateComputerChoice();

    //Displays player and computer choice
    printf("\nPlayer's choice: %d\n", playerChoice);
    printf("Computer's choice: %d\n", computerChoice);

    // Determine the winner
    result = determineWinner(playerChoice, computerChoice);

    // Display the result
    if (result == -1)
    {
        printf("\nIt's a tie!\n\n");
    }
        
    else if (result == 0)
    {
        printf("\nPlayer wins!\n\n");
    }
        
    else
    {
         printf("\nComputer wins!\n\n");
    }  

    return 0;
}
