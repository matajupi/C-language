#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);
    // for (int i = 0; count > i; i++) {
    //     printf("Hello %d\n", i);
    // }

    int c = 0;
    for (;;) {
        printf("Hello %d\n", c);
        if (c == count) break;
        c++;
    }
    return 0;
}
