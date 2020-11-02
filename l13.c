#include <stdio.h>
#include <string.h>

int main(void) {
    // int array[10];
    // array[9] = 100;
    // printf("%d\n", array[9]);
    // array[9]++;
    // printf("%d\n", array[9]);

    // int array[10] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 100 };
    // for (int i = 0; 10 > i; i++) {
    //     printf("%d\n", array[i]);
    // }

    // int array[] = { 1, 2, 3 };
    // printf("%d\n", sizeof(array[0]));
    // printf("%d\n", sizeof(array));
    // printf("%d\n", sizeof(array) / sizeof(array[0]));
    // char c = 'a';
    // printf("%d\n", sizeof(c));
    // for (int i = 0; sizeof(array) / sizeof(array[0]) > i; i++) {
    //     printf("%d\n", array[i]);
    // }

    // int array[3];
    // int array2[sizeof(array) / sizeof(array[0])];
    //
    // for (int i = 0; sizeof(array) / sizeof(array[0]) > i; i++) {
    //     scanf("%d", &array[i]);
    // }
    //
    // memcpy(array2, array, sizeof(array));
    //
    // for (int i = 0; sizeof(array2) / sizeof(array2[0]) > i; i++) {
    //     printf("%d\n", array2[i]);
    // }

    int array[10];

    for (int i = 0; sizeof(array) / sizeof(array[0]) > i; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = sizeof(array) / sizeof(array[0]) - 1; 0 <= i; i--) {
        printf("%d\n", array[i]);
    }

    return 0;
}
