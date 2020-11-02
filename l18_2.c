#include <stdio.h>

int main(int argc, char *argv) {
    const double EXCISETAX = 0.05;
    int price;
    printf("–{‘Ì‰¿Ši: ");
    scanf("%d", &price);
    price = (int)((EXCISETAX + 1) * price);
    printf("Å‚İ‰¿Ši: %d\n", price);
    return 0;
}

