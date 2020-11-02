#include <stdio.h>
#include <string.h>

typedef struct {
    unsigned int number;
    char name[64];
    unsigned int point;
} character;

int main(int argc, char *argv[]) {
    FILE *fp;
    character students[4];
    make_data(students);
    fp = fopen("students.csv", "w");
    fprintf(fp, "番号,名前,テストの平均点\n");
    for (int i = 0; 4 > i; i++) fprintf(fp, "%d,%s,%d\n", 
            (students + i)->number, (students + i)->name, (students+i)->point);
    fclose(fp);
    return 0; 
}
void make_data(character *students) {
    char names[4][64] = {"野比のび太", "源静香", "剛田武", "骨川スネ夫"};
    unsigned int points[4] = {0, 90, 40, 70};
    for (int i = 0; 4 > i; i++) {
        students->number = i + 1;
        strcpy(students->name, names[i]);
        students->point = points[i];
        ++students;
    }
    return;
}

