#include <stdio.h>

void putarray(int *pArray, int length);

int main(void) {
    int array1[] = {1, 2, 3, 4, 5};
    putarray(array1, sizeof(array1) / sizeof(int));
    return 0;
}

void putarray(int *pArray, int length) {
    for (int i = 0; length > i; i++) {
        printf("%d = %d\n", i, pArray[i]);
    }
    return;
}
