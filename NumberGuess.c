// NUMBER GUESSING GAME
// program that asks the user to guess a number between 1 and 100. The program should then give hints to the user until they guess the correct number.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//called function
// generates a random number between 1 to 100
//checks whether the user guesses number is same or not
void NumberGuess(int N)
{
    //variable to store a random number
    int Ran_Num,Guess,count=0;

    //Seed the random number generator
    srand(time(NULL));

    //genretes random number and take its modulo with 100 
    Ran_Num=rand()%N;

    printf("\nHello guys!\n");
    printf("please,Guess a random number between 1 and 100\n");
    do
    {
        // Reads the user guessed number
        scanf("%d",&Guess);

        //checks whether the user guessed number is matched with randomly generated number or not
        if(Guess<Ran_Num)
        {
            // if guessed numner is less than random number gives hints to find the random number
            printf("OOPS!,The number you guessed is Smaller than the number generated randomly, Please TRY YOUR LUCK AGAIN\n");
            count++;
        }

        else if (Guess>Ran_Num)
        {
            // if guessed numner is greater than random number gives hints to find the random number
            printf("OOPS!,The number you guessed is Greater than the number generated randomly, Please TRY YOUR LUCK AGAIN\n");
            count++;
        }

        else
        {
            // If guessed number matches with the random number
            printf("YEAH! You Guessed the correct number\n\n");
        }
    } while(Guess !=Ran_Num);
}


// main class where the porgram starts
int main()
{
    int N=100;

    //Function call
    NumberGuess(N);
    return 0;
}