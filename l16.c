#include <stdio.h>
#include <string.h>

struct student {
    int year;
    int hr;
    int number;
    char name[64];
    double stature;
    double weight;
};

int main(void) {
    // struct student data;
    //
    // data.year = 10;
    // printf("%d\n", data.year);

    struct student data1, data2;
    data1.year = 3;
    data1.hr = 4;
    data1.number = 18;
    strcpy(data1.name, "Who are you");
    data1.stature = 168.2;
    data1.weight = 72.4;

    data2 = data1;
    printf("%d\n", data2.year);
    data2.year = 5;
    printf("%d %d\n", data1.year, data2.year);

    // 構造体はコピーされる（参照ではなく値が)
    return 0;
}
