/*
#include <stdio.h>

int main() {
    int size;
    FILE *fp = fopen("hello.txt", "r");

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    printf("%d\n", size);
    fclose(fp);

    return 0;
}
*/

#include <stdio.h>

int main() {
    const char *name = "Welcome to Linux Programming\n";
    char buf[100];
    int size;
    FILE *out = fopen("out", "w");

    
    printf("printf result : %s", name);
    sprintf(buf, "sprintf result : %s", name);
    printf("%s", buf);

    fprintf(out, "fprintf result : %s", name);
    fseek(out,0,SEEK_END);
    size = ftell(out);
    printf("%d", size);
    return 0;
}