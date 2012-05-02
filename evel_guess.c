#include "evel_guess.h"

int evel_guess(char *str, char *guess, int len, char *result) {
	int num_a = 0, num_b = 0, matched[len];
	int i, j;
	
	if (strlen(str) < len || strlen(guess) < len || strlen(str) != strlen(guess)) return -1;
	for (i = 0; i < len; matched[i++] = 0);
	
	for (i = 0; i < len; i++) {
		if (guess[i] == str[i]) {
			num_a++;
			matched[i] = 1;
		}
	}
	
	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			if (guess[i] == str[j] && matched[j] == 0) {
				num_b++;
				matched[j] = 1;
				break;
			}
		}
	}
	
	sprintf(result, "%dA%dB", num_a, num_b);
	return 0;
}
