#include <stdio.h>
#include <string.h>
#include "my_header.h"

unsigned int matching(const char* pattern, FILE *file) {
	int count = 0;
	int len = 0;
	while (!feof(file)) {
		char buffer[100];

		char *string = fgets(buffer, sizeof(buffer), file);

		if (strstr(buffer,pattern)) 
		{
			count++;
		}	

	}
	return count;
}