#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    MAN,
    WOMAN,
};

typedef struct {
    char name[64];
    int age;
    int gender;
} Person;

int input_data(Person *p);
void put_data(Person p);

int main(int argc, char *argv) {
    int size = 0;
    Person *people = (Person *)malloc(0);
    while (1) {
        size++;
        people = (Person *)realloc(people, sizeof(Person) * size);
        if (input_data(people + (size - 1))) break;
    }
    printf("result\n");
    for (int i = 0; size - 1 > i; i++) {
        put_data(people[i]);
    }
    free(people);
    return 0;
}

int input_data(Person *p) {
    printf("name: "); scanf("%63s", p->name);
    printf("age: "); scanf("%d", &p->age);
    int gender;
    printf("gender: "); scanf("%d", &gender);
    if (gender == 1) p->gender = MAN;
    else p->gender = WOMAN;
    if (p->age == -1) return 1;
    return 0;
}

void put_data(Person p) {
    printf("name: %s\n", p.name);
    printf("age: %d\n", p.age);
    char gen[16];
    if (p.gender == MAN) strcpy(gen, "MAN");
    else strcpy(gen, "WOMAN");
    printf("gender: %s\n", gen);
    return;
}
