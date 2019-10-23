#include "reverse.h"

void reverse(char* text, int len) {
    char temp;
    for(int i = 0; i < len /2 ; i++) {
        temp = text[i];
        text[i] = text[(len - 1) - i];
        text[(len - 1) - i] = temp;
    }
}