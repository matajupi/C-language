#include <stdio.h>

void function1(int);

int main() {
    function1(1);
    function1(2);
    function1(3);
    return 0;
}

void function1(int num) {
    static int count;
    count += num;
    printf("%d\n", count);
}
