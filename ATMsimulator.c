// ATM SIMULATOR
//program that simulates an ATM machine and allows users to deposit, withdraw, and check their balance.

#include <stdio.h>

 // variable to store initial balance 
unsigned long amount=1000;

//varibales to store deposit and withdrawl amount
unsigned long deposit, withdraw;

// variables to store user choice,Atm pin
int ch, pin, k;
char transaction ='y';
 
void main()
{

	// to check whether the given ATM pin is valid or not
	while (pin != 1102)
	{
		printf("\nENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);

		// Checks whether the entered pin matches 
		if (pin != 1102)
		printf("PLEASE ENTER VALID PIN\n");
	}
	do
	{
		// Statements to select the user input 
		printf("\n*********Hello! Welcome to ATM Service*************\n");
		printf("Please select your choice!\n");
		printf("1. Check Your Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("***********************?***************************\n\n");
		printf("Enter your choice: ");

		// Reading user choice
		scanf("%d", &ch);

		// Switch case for user choices
		switch (ch)
		{

		// check balance
		case 1:
			printf("\n YOUR ACCOUNT BALANCE IN Rs : %lu ", amount);
			break;

		// withdrawl amount
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE! Please enter other amount");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n PLEASE COLLECT YOUR CASH");
				printf("\n YOUR CURRENT ACCOUNT BALANCE IS %lu", amount);
			}
			break;

		// Deposit amount
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT: ");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR ACCOUNT BALANCE IS %lu", amount);
			break;

		case 4:
			printf("\n THANK YOU FOR USING OUR ATM SERVICE");
			break;

		default:
			printf("\n INVALID CHOICE");
		}

		printf("\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): ");
		fflush(stdin);

		// Reading user transaction
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	
	printf("\n******* THANKS FOR USING OUR ATM SERVICE*****\n\n");
}