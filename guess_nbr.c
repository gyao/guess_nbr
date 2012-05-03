#include "guess_nbr.h"

int main(int argc, char *argv[]) {
	char source[] = "0123456789";
	char *four_digits_nbr;
	char guess[5], result[5];
	
	four_digits_nbr = gen_rand_string(source, 4);
	
	do {
		printf("Input your guess: ");
		scanf("%s", guess);
		if (strcmp(guess, "fml") == 0) {
			printf("Here's the clue: %s\n", four_digits_nbr);
			continue;
		}
		if (strcmp(guess, "exit") == 0) {
			printf("Hey, yo loser, bye!\n");
			break;
		}
		evel_guess(four_digits_nbr, guess, 4, result);
		printf("%s\n", result);
	} while (strcmp (result, "4A0B") != 0);
	
	free(four_digits_nbr);
	return 0;
}
