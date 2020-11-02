#include <stdio.h>
#include <string.h>

int *append(int *p, int length, int num);

int main(void) {
    int array[] = {1, 2, 3, 4};
    int *p_array = array;
    p_array = append(array, sizeof(array) / sizeof(int), 5);
    printf("%d\n", sizeof(*p_array) / sizeof(int));
}

int *append(int *p, int length, int num) {
    int new_array[++length];
    memcpy(new_array, p, length);
    int *p_new_array = new_array;
    printf("%d\n", sizeof(new_array) / sizeof(int));
    return p_new_array;
}
