#include "gen_rand_string.h"

void gen_rand_string(char *src, int len, char *dest) {
	for (srand((unsigned)time(NULL)); len-- > 0; *dest++ = src[rand() % strlen(src)]);
	*dest = '\0';
}
