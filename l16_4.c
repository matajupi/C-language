#include <stdio.h>
#include <string.h>

typedef struct {
    char name[64];
    unsigned int age;
    char gender;
} person;

void input(person *data, size_t count);
void put(person *data, size_t count);

int main(void) {
    size_t count = 3;
    person data[count];
    input(data, count);
    put(data, count);
    return 0;
}

void input(person *data, size_t count) {
    printf("name age gender\n");
    printf("gender -> man: m, woman: w\n");
    for (int i = 0; count > i; i++) {
        scanf("%63s %d %c", (data + i)->name, &(data + i)->age, &(data + i)->gender);
    }
    return;
}

void put(person *data, size_t count) {
    for (int i = 0; count > i; i++) {
        printf("name: %s, age: %d, gender: %c\n", (data + i)->name, (data + i)->age, (data + i)->gender);
    }
    return;
}
