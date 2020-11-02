#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // char c = 'A';
    // printf("%c\n", c);

    // char c = 'A' + 9;
    // printf("%c\n", c);

    // char c = '9';
    // int res = c - '0';
    // printf("%d\n", res);

    // char c;
    // scanf("%c", &c);
    // if (c >= '0' && c <= '9') {
    //     int res = c - '0';
    //     printf("%d\n", ++res);
    // } else {
    //     printf("No\n");
    // }

    // char c;
    // scanf("%c", &c);
    // if (isdigit(c)) {
    //     int res = c - '0';
    //     printf("%d\n", ++res);
    // } else {
    //     printf("No comment\n");
    // }

    // char str[] = {'K', 'O', 'S', 'U', 'K', 'E', '\0'};
    // printf("%s\n", str);

    // char str[] = "Kouske futamata";
    // printf("%s\n", str);

    // char str[] = "";
    // printf("%s\n", str);
    // printf("%d\n", &str);
    // printf("%d\n", sizeof(str));
    // gets(str);
    // printf("%s\n", str);
    // printf("%d\n", &str);
    // printf("%d\n", sizeof(str));

    // char c[5] = {'a', 'b', 'c', 'd', 'e'};
    // c[5] = 'f'; // バッファオーバーラン
    // c[6] = '\0';
    // printf("%s\n", c);
    // printf("%d\n", sizeof(c));

    // char str[] = "143";
    // int num = atoi(str);
    // printf("%d\n", ++num);

    // char root[] = "Fast food";
    // char copy[256];
    // strcpy(copy, root);
    // printf("%s\n", copy);

    // char root[] = "fast food";
    // char copy[256];
    // strncpy(copy, root, 4);
    // copy[4] = '\0';
    // printf("%s\n", copy);

    // char str[] = "Fast" "Food";
    // printf("%s\n", str);

    // char str1[9] = "Fast"; // caution
    // char str2[] = "Food";
    // strcat(str1, str2);
    // printf("%s\n", str1);

    // char str[16];
    // char str1[12] = "Faster";
    // char str2[] = "Food?";
    // int i = 3;
    // sprintf(str, "%s%s%d\n", str1, str2, i);
    // printf("%s\n", str);

    // char str[10];
    // scanf("%9s", str);
    // printf("%s\n", str);

    // char str[256];
    // scanf("%255s", str);
    // int length;
    // for (length = 0; str[length] != '\0'; length++);
    // printf("%d\n", length);

    // char str[256];
    // scanf("%255s", str);
    // int length = strlen(str);
    // printf("%d\n", length);

    // char str[256], str1[] = "How";
    // scanf("%255s", str);
    // int len = strlen(str1);
    // int count;
    // for (count = 0; count < len + 1; count++) {
    //     if (str[count] != str1[count]) break;
    // }
    // if (count == len + 1) {
    //     printf("OK");
    // } else {
    //     printf("No");
    // }

    // char str[256], str1[] = "How";
    // scanf("%255s", str);
    // if (strcmp(str, str1) == 0) {
    //     printf("OK");
    // } else {
    //     printf("No");
    // }

    char first[256], last[256], full[256 * 2];
    scanf("%255s", first);
    scanf("%255s", last);
    sprintf(full, "%s%c%s", first, ' ', last);
    printf("%s\n", full);

    return 0;
}
