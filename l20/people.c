#include "people.h"

void InputPeople(People *data) {
    printf("Name: ");
    scanf("%63s", data->name);
    printf("Age: ");
    scanf("%d", &data->age);
    printf("Gender (1-man, 2-woman): ");
    scanf("%d", &data->gender);
    printf("\n");
}

void ShowPeople(People data) {
    char gender[16];
    printf("Name: %s\n", data.name);
    printf("Age: %d\n", data.age);
    
    if (data.gender == 1) strcpy(gender, "man");
    else strcpy(gender, "woman");

    printf("Gender: %s\n", gender);
}
