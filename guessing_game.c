#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
		TODO:
		change this guessing game to make it accept command line arguement
		or accept user input so that it can generate a random secret number
		within user specified range.
		Google rand() and srand()
	*/
	//////////Your code here//////////
	//int secret = 77;
  int secret = atoi(argv[0]);
	//////////End of the code/////////

	printf("Welcome to my guessing game!\n");
	while(true) {
		// Print a prompt (part of a line)
		printf("Type your guess and then ENTER: ");
		// Make sure it becomes visible (otherwise C is allowed to wait
		// until you print a new line, e.g., '\n' before doing anything.
		fflush(stdout); // https://www.geeksforgeeks.org/use-fflushstdin-c/
		int guess = 0;
		int status = scanf("%d", &guess);
		if (status != 1) break;
			printf("You guessed: %d\n", guess);
		if (secret == guess) {
			printf("Congratulations! You guessed the secret.\n");
			break;
		} else if (secret < guess) {
			printf("Too high! Guess again.\n");
		} else {
			printf("Too low! Guess again.\n");
		}
	}
}
