/*this is a simple program to demonstrate how a binary search works.
 * the computer will determine an upper bound and then pick a random number between it and 1. the computer will then determine the number of guesses to ensure the player always has enough to find the number, provided they know how to use a binary search*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
	//random number = (rand()%(upper-lower+1))+lower
	srand(time(NULL));
	int upper_bound = (rand()%(1000-1+1))+1;
	int random_number = (rand()%(upper_bound-1+1))+1;
	//log change of base formula
	int num_guesses = (log(upper_bound)/log(2));
	printf("welcome to a guessing game you can always win\n ");
	printf("im thinking of a number between 1 and %d\n", upper_bound);
	printf("you have %d guesses and I will tell you if you are high or low\n", num_guesses);
	while(num_guesses>0){
	printf("enter your guess: ");
	int user_guess = 0;
	scanf(" %d", &user_guess);
	printf("\n");
	if(user_guess < random_number){
		printf("your guess is too low\n");
		printf("you have %d guesses left\n", --num_guesses);
		}
	else if(user_guess > random_number){
		printf("your guess is too high\n");
		printf("you have %d guesses left\n", --num_guesses);	
	}
	

	}


	return 0;
}
