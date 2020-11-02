#include <stdio.h>
#define PRINT_TEMP printf("temp = %d\n", temp)
#define rep(n) for (int i = 0; n > i; i++)

enum {
    INFO,
    WARANING,
    ERROR
};

int main(int argc, char *argv) {
    int status = INFO;
    if (status == INFO) printf("INFO\n");
    int temp = status;
    PRINT_TEMP;
    rep(10) {
        printf("%d\n", i);
    }
    return 0;
}
