#include <stdio.h>

int sum(void);
int res(int, int);

int main(void) {
    // sum();
    int max, min;
    scanf("%d%d", &max, &min);
    printf("%d\n", res(max, min));
    return 0;
}

int res(int max, int min) {
    int ans = (max + min) / 2;
    return ans;
}

int sum(void) {
    printf("Hello world\n");
    return 0;
}
