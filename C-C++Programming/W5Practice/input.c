#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main() {
    char f[2];
    int j = 0;
    int i = open("input.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRUSR);
    while(1) {
        read(0, f, 2);
      if(f[0] == 'q' || f[0] == 'Q'){
            break;
        }
        
        write(i, f, 1);
    }
    

    return 0;
    
}