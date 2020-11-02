#include <stdio.h>

int main(void) {
    FILE *file;
    int buf = 100;
    // int buf[] = { 1.0e+1, 1.0e+2, 1.0e+3, 1.0e+4 };
    file = fopen("test.dat", "wb");
    fwrite(&buf, sizeof(buf), 1, file);
    // fwrite(buf, sizeof(buf), 1, file);
    fclose(file);
    int res;
    file = fopen("test.dat", "wb");
    fread(&buf, sizeof(buf), 1, file);
    fclose(file);
    printf("%d\n", buf);
    return 0;
}
