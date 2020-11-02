#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) {
    int size;
    scanf("%d", &size);
    int *heap = (int *)malloc(sizeof(int) * size);
    if (heap == NULL) exit(0);
    int data;
    for (int i = 0; size > i; i++) {
        scanf("%d", &data);
        *(heap + i) = data;
    }
    for (int i = 0; size > i; i++) {
        printf("%d=%d\n", i, *(heap + i));
    }
    int add;
    scanf("%d", &add);
    size += add;
    heap = (int *)realloc(heap, sizeof(int) * size);
    if (heap == NULL) exit(0);
    for (int i = 0; add > i; i++) {
        scanf("%d", &data);
        *(heap + size - add + i) = data;
    }
    for (int i = 0; size > i; i++) {
        printf("%d=%d\n", i, *(heap + i));
    }
    free(heap);
    printf("Free\n");
    return 0;
}
