#include <stdio.h>
#define GET_AREA(A, B, H) ((A) + (B)) * (H) / 2

int main(int argc, char *argv) {
    int area = GET_AREA(5, 10, 8);
    printf("%d\n", area);
    area = GET_AREA(5, 10, 5 + 3);
    printf("%d\n", area);
    return 0;
}
