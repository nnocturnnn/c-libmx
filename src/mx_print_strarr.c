#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	if(*arr != NULL && delim != NULL) {
		while(*arr != NULL){
			mx_printstr(*arr);
			mx_printstr(delim);
			arr++;
		}
	}
	mx_printchar('\n');
}
