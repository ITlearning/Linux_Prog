#include <stdio.h>
#include <string.h>
#include "my_header.h"

unsigned int matching(const char* pattern, FILE *file) {
	int count = 0;
	int len = 0;
	while (1) {
		char buffer[1000];
		if (fgets(buffer, 1000, file) == NULL) {
			return count;
		}

		char* a = strstr(buffer, pattern);
		while (a != NULL) {
			count++;

			a = strstr(a+1, pattern);
		}

	}

	return count;
}