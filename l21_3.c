#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv) {
    int c, val[10];
    char str[32], *ch;
    fgets(str, sizeof(str), stdin);
    ch = strtok(str, ",\n");

    for (c = 0; 10 > c; c++) {
        if (ch == NULL) break;
        val[c] = atoi(ch);
        ch = strtok(NULL, ",\n");
    }

    for (int i = 0; c > i; i++) printf("%d\n", val[i]);
}
