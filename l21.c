#include <stdio.h>

int main(int argc, char *argv) {
    char str[32];

    // gets(str);
    fgets(str, sizeof(str), stdin);
    puts(str);

    return 0;
}
