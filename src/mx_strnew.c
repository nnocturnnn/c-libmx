#include "libmx.h"

char *mx_strnew(const int size){
	char * arr = (char*) malloc(size + 1);
	if(arr == NULL)
		return NULL;
	for(int i = 0;i <= size ; i++){
		arr[i] = '\0';
	}
	return arr;
}
