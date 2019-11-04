#include "libmx.h"

static bool mx_isspace(char c) {
	if(c == 32 ||( c > 8 && c < 14))
		return 1;
	return 0;
}


char *mx_del_extra_spaces(const char *str) {
	char *a = mx_strtrim(str);
	int l = mx_strlen(a);
	int count = 0;
	int q = 0;
	int q2 = 0;
	for(int i = 0; a[i] != '\0'; i++) {
		if(mx_isspace(a[i]) == 1 && mx_isspace(a[i + 1]) == 1) {
			count++;
		}
	}
	int sum = l - count;
	char *eo = mx_strnew(sum);
	while(q2 < sum) {
		if(mx_isspace(a[q]) == 1 && mx_isspace(a[q + 1]) == 1){
			q++;
		} else {
		eo[q2] = a[q];
		q++;
		q2++;
		}
	}
	return eo;
}
