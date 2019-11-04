#include "libmx.h"

void mx_str_reverse(char *s) {
	int c = mx_strlen(s) - 1;
	for(int q = 0; q != c; q++){
		mx_swap_char(&s[q], &s[c]);
		c--;
	}
}
