#include "guess_nbr.h"

int main(int argc, char *argv[]) {
	char source[] = "0123456789";
	char four_digits_nbr[5], guess[5], result[5];
	
	gen_rand_string(source, 4, four_digits_nbr);
	printf("Random number: %s\n", four_digits_nbr);
	
	do {
		printf("Input your guess: ");
		scanf("%s", guess);
		evel_guess(four_digits_nbr, guess, 4, result);
		printf("%s\n", result);
	} while (strcmp (result, "4A0B") != 0);

	return 0;
}