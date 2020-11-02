#include <stdio.h>
#include <string.h>

// struct student_tag {
//     int year;
//     int hr;
//     int number;
//     char name[64];
//     double stature;
//     double weight;
// };
//
// typedef struct student_tag student; // 型宣言

// 構造体型
typedef struct {
    int year;
    int hr;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

// void student_print(student data);
void student_print(student *data);

int main(void) {
    // student data;
    // data.year = 3;
    // data.hr = 4;
    // data.number = 18;
    // strcpy(data.name, "HIDOUKI?");
    // data.stature = 168.2;
    // data.weight = 72.4;
    //
    // student_print(data);

    // student data;
    // student *p_data;
    //
    // p_data = &data; // 構造体始めの要素のアドレスが渡される
    // (*p_data).year = 10;
    // strcpy((*p_data).name, "Wai");
    // printf("%d\n", data.year);
    // printf("%s\n", data.name);
    // printf("%p\n", p_data);

    student data;
    student *p_data;

    p_data = &data;
    p_data -> year = 10;
    strcpy(p_data -> name, "Wai");
    // printf("%d\n", p_data -> year);
    // printf("%s\n", p_data -> name);
    // printf("%p\n", p_data);
    student_print(&data);
    return 0;
}

// void student_print(student data) {
//     printf("year: %d\n", data.year);
//     printf("class: %d\n", data.hr);
//     printf("number: %d\n", data.number);
//     printf("name: %s\n", data.name);
//     printf("stature: %f\n", data.stature);
//     printf("weight: %f\n", data.weight);
//     return;
// }

void student_print(student *data) {
    printf("%d\n", data -> year);
    printf("%d\n", data -> hr);
    printf("%s\n", data -> name);
    printf("%p\n", data);
}
