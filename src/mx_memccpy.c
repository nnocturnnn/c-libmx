#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
 	char *desti = (char*)dst;
	char *sourc = (char*)src;
	
    if (sourc[0] == (unsigned char)c)
        return NULL;

	for(size_t i = 0; i < n;) {
		if(sourc[i] == (unsigned char)c) {
			desti[i] = sourc[i];
			break;
		}
		desti[i] = sourc[i];
		i++;
	}
	return desti;
}
