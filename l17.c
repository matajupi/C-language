#include <stdio.h>

int main(void) {
    FILE *file;
    int i, j;
    file = fopen("test.txt", "w");
    // fprintf(file, "Hello world\n");
    // fprintf(file, "test%d", i);
    fprintf(file, "1,2");
    fclose(file);
    file = fopen("test.txt", "r");
    fscanf(file, "%d,%d", &i,&j);
    fclose(file);
    printf("%d%d\n",i, j);
    return 0;
}
