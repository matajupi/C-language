#include <stdio.h>

// argc: 引数の数 argv: 引数リスト
int main(int argc, char *argv[]) {
    // if (argc > 1) {
        // printf("%s\n", argv[1]);
    // }
    // printf("%d\n", argc);

    while (argc > 0) {
        argc--;
        if (argv[argc][0] == '-') {
            if (argv[argc][1] == 'a') printf("Option a\n");
            if (argv[argc][1] == 'b') printf("Option b\n");
        }
    }
    getchar();
    return 0;
}
