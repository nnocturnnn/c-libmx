#include "libmx.h"

static bool mx_isspace(char c) {
	if(c == 32 ||( c > 8 && c < 14))
		return 1;;
	return 0;
}

char *mx_strtrim(const char *str) {
	int i = 0;
	int c = 0;
	int start =0;
	int finish = mx_strlen(str) ;
	int finish1 = finish - 1;
	while(mx_isspace(str[i]) != 0) {
		i++;
		start++;
	}
	for(int n = 0;n != 1;){
		finish1--;
		i++;
		if(mx_isspace(str[finish1]) == 0)
			n = 1;
	}
	finish1 = finish - i;
	char *strim = (char*)malloc(finish1 + 1);
	for(;c < finish1; start++){
		strim[c] = str[start];
		c++;
	}
	strim[c] = '\0';
	return strim;
}
