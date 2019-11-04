#include "libmx.h"

int mx_count_words(const char *str, char c) {
	int j = 0;
	int count = 0;
	if(str){
		int i = mx_strlen(str) - 1;
		while(str[j] != '\0') {
			if(str[j] != c && str[j + 1] == c) {
				count++;
				j++;
			}
			else {
				j++;
				continue;
			}
			if(str[i] != c){
			count++;
			}
		}
		return count;
	}
	return -1;
}
