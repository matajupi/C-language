#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) {
    int size;
    int *heap;
    scanf("%d", &size);
    heap = (int *)malloc(sizeof(int) * size);
    if (heap == NULL) {
        printf("MEMORY ERROR\n");
        exit(0);
    }
    int data;
    for (int i = 0; size > i; i++) {
        scanf("%d", &data);
        *(heap + i) = data;
    }
    for (int i = 0; size > i; i++) {
        printf("%d\n", *(heap + i));
    }
    free(heap);
    printf("free\n");
    return 0;
}
