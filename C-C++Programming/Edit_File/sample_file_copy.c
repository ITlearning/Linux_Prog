#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    char c;
    int in, out;

    in = open("input.txt", O_RDONLY);
    out = open("output.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

    while (read(in, &c, 1)==1) {
	    write(out, &c, 1);
    }

    close(in);
    close(out);

    return 0;
}
