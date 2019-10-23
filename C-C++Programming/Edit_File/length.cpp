#include "length.h"

int length(char *text) {
    int i = 0;
     while(text[i++]!=0);

     return i - 1;
 }