#include "people.h"

int main(int argc, char *argv) {
    People people;
    People *p_people = &people;
    InputPeople(p_people);
    ShowPeople(people);
    return 0;
}
