#include <stdio.h>
#include <string.h>

typedef struct {
    int year;
    char name[64];
} student;

void put(student *data, int count);

int main(void) {
    // student data[10];
    // (data + 1) -> year = 3;
    // strcpy((data + 1) -> name, "Sasuke");
    // printf("%d\n", (data + 1) -> year);
    // printf("%s\n", (data + 1) -> name);

    int count;
    scanf("%d", &count);
    student data[count];
    for (int i = 0; count > i; i++) {
        scanf("%d", &(data + i)->year);
        scanf("%63s", (data + i)->name);
    }
    put(data, sizeof(data) / sizeof(student));
    return 0;
}

void put(student *data, int count) {
    for (int i = 0; count > i; i++) {
        printf("%d year %d\n", i, (data + i)->year);
        printf("%d name %s\n", i, (data + i)->name);
    }
    return;
}
