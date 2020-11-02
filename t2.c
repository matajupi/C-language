#include <stdio.h>

int plus(int a, int b) {
    return a + b;
}

int main(void) {
    int (*func1)(int a, int b);
    func1 = plus;
    printf("%p\n", plus);
    printf("%p\n", func1);
    printf("%d\n", func1(1, 3));

    return 0;
}
