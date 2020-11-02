#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) {
    int val;
    char ip[32];

    fgets(ip, sizeof(ip), stdin);
    val = atoi(ip);
    printf("%d\n", val * val);
    return 0;
}
