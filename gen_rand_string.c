#include "gen_rand_string.h"

char *gen_rand_string(char *seed, int len) {
	char *tmp = (char *)malloc(len * sizeof(char) + 1);
	char *str = tmp;
	
	for (srand((unsigned)time(NULL)); len-- > 0; *tmp++ = seed[rand() % strlen(seed)]) *tmp = '\0';
	
	return str;
}
