#include <stdio.h>

int main(void) {
    int max = 0, or = 0, min = 100, count = 0;
    while (1) {
        scanf("%d", &or);
        if (or == -1) break;
        if (or > max) max = or;
        if (or < min) min = or;
        if (++count == 10) break;
    }
    printf("%d\n", max);
    printf("%d\n", min);
}
